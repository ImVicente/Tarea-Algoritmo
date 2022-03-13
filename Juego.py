#Procedimiento para saber el ganador
def ganador(accion_usuario,accion_computadora):
  
  if accion_usuario=="piedra":
    if accion_computadora=="piedra":
      print("Es un empate")
      contador(accion_usuario,accion_computadora)
    if accion_computadora =="papel":
      print("La computadora ha ganado")
      contador(accion_usuario,accion_computadora)
    if accion_computadora=="tijera":
      print("Usted ha ganado")
      contador(accion_usuario,accion_computadora)

  if accion_usuario=="papel":
    if accion_computadora=="papel":
      print("Es un empate")
      contador(accion_usuario,accion_computadora)
    if accion_computadora =="tijera":
      print("La computadora ha ganado")
      contador(accion_usuario,accion_computadora)
    if accion_computadora=="piedra":
      print("Usted ha ganado")
      contador(accion_usuario,accion_computadora)

  if accion_usuario=="tijera":
    if accion_computadora=="tijera":
      print("Es un empate")
      contador(accion_usuario,accion_computadora)
    if accion_computadora =="piedra":
      print("La computadora ha ganado")
      contador(accion_usuario,accion_computadora)
    if accion_computadora=="papel":
      print("Usted ha ganado")
      contador(accion_usuario,accion_computadora)
#Procedimiento que inicia el juego
def iniciar_juego():
  elegir_opcion()