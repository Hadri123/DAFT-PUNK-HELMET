# DAFT PUNK HELMET
This repository contains the main code to realise light animation with the daft punk helmet.

## About the hardware
### Helmet
* Seven STL file to 3D print in PLA. Estimate time to print : 4 days  
 **If I had to redo it :** do not cut the front face
* Plexiglass
* [20% tint film](https://www.luminis-films.com/films-pour-vitrages/vitres-teintees/film-solaire-voiture/Film-teinte-pour-auto-Noir-moyen-AUTO-020i)
### Electronics
* Arduino Nano
* [HM10 Bluetooth Module](https://www.amazon.fr/gp/product/B06WGZB2N4/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1) to communicate with a smartphone with BLE Scanner 
* [1 meter of adressable LED strip](https://fr.aliexpress.com/item/32961181562.html?spm=a2g0o.order_list.0.0.12625e5bDeU7RO&gatewayAdapt=glo2fra) (60LED/m, white background) for the visor. The LED matrix size is 5x12.  
 **If I had to redo it :** use 2m of black background led strip to have a 5x16 matrix
* [2 led ring 6cm diameter](https://fr.aliexpress.com/item/32673883645.html?spm=a2g0o.order_list.0.0.12625e5bDeU7RO&gatewayAdapt=glo2fra) (24LED/ring) for the ears.
* [9V pile](https://www.amazon.fr/gp/product/B0774D64LT/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1) with it [connectors](https://www.amazon.fr/gp/product/B08ZD7ZB8T/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
* [Interuptor](https://fr.aliexpress.com/item/4001332967504.html?spm=a2g0o.order_list.0.0.12625e5bDeU7RO&gatewayAdapt=glo2fra)
* Dupont wires
* [Soldering kit](https://www.amazon.fr/gp/product/B088WMQ6GR/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1)


### PIN CONFIG
- RUBAN LED 6
- OREILLE G 5
- OREILLE D 4
- BLUETOOTH TX 2
- BLUETOOTH RX 3

