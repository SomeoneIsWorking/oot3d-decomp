// OoT3D decomp @ 002db500  name=FUN_002db500  size=80

void FUN_002db500(int *param_1)

{
  char *pcVar1;

  pcVar1 = DAT_002db550;
  if (*DAT_002db550 != '\0') {
    FUN_0047de7c();
    software_interrupt(0x23);
    if (*param_1 < 0) {
      FUN_0030e3ac(*param_1,&DAT_002db554,0,&DAT_002db554);
      FUN_002fb928(0);
    }
    *pcVar1 = '\0';
  }
  return;
}
