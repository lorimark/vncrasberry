# vncrasberry
VNC Dispatcher - for raspberry pi

VNCrasberry: VNC Dispatcher for Raspberry Pi

Overview
VNCrasberry is a lightweight VNC server dispatcher, designed to
 simplify access to VNC servers within private networks. While
 it doesn't strictly require a Raspberry Pi, this setup is
 particularly well-suited for it—or any small, capable computer
 with network and routing capabilities.

Objective
To create a free, simple VNC server dispatcher that:

    Runs on any computer with internet access.
    Discovers VNC servers within a private network.
    Exposes these VNC servers securely to external devices via
     a VPN.

This setup requires:

    A computer inside the private network that supports VPNs.
    IPTables for routing and NAT configurations.

How It Works

    Setup
        Use a Raspberry Pi (or similar device), running basic
         linux.
        Configure the Pi with:

            eth0: Connects to the private network and obtains
             an IP via DHCP.

            tun0: Establishes a VPN tunnel to a public VPN
             server.

            IPTables: Routes traffic between the VPN and the
             private network.

    Functionality
        The VNCrasberry device connects to the private network
         via eth0.

        It establishes a VPN connection via tun0.

        IPTables rules enable traffic from the public VPN to access
         private network nodes on port 5900 (VNC default).

    Discovery and Mapping
        The VNCrasberry device scans the private network for
         devices running VNC servers on port 5900.

        Each discovered server is mapped to a unique external
         port using IPTables:
            PC1: Private 5900 -> Public 5900
            PC2: Private 5900 -> Public 5901
            PC3: Private 5900 -> Public 5902

    Access from Outside
        An external PC connected to the VPN can access the
         private VNC servers through the public VPN server:
            ExternPC1 -> VNCrasberry:5900 -> PC1
            ExternPC1 -> VNCrasberry:5901 -> PC2
            ExternPC1 -> VNCrasberry:5902 -> PC3

Key Advantages

    Plug-and-Play: Simply connect the VNCrasberry to a private
     network via eth0, and it auto-configures.

    Secure Access: All traffic routes securely through a VPN.
    No exposed ports on the site router

    No Configuration Hassles: Devices on the private network can
     run VNC servers with default settings on port 5900.

Conclusion
This setup makes it easy to remotely access multiple VNC servers
 in a secure and efficient manner, leveraging the Raspberry Pi
 as a cost-effective dispatcher.


