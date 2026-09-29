// OoT3D decomp @ 002db3b8  name=FUN_002db3b8  size=320

undefined4 FUN_002db3b8(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;

  pcVar1 = DAT_002db4f8;
  if (*DAT_002db4f8 != '\0') {
    return 1;
  }
  local_20 = param_4;
  iVar2 = FUN_0030de88();
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_002db4fc,0,&DAT_002db4fc);
    FUN_002fb928(0);
  }
  uVar3 = FUN_0030de24(param_2);
  FUN_0030dde8(param_1,param_2,uVar3,0);
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_002db4fc,0,&DAT_002db4fc);
    FUN_002fb928(0);
  }
  iVar2 = FUN_0047de3c(&local_20);
  if (iVar2 < 0) {
    iVar2 = *param_1;
    software_interrupt(0x23);
  }
  else if ((local_20 & 0xff) < 2) {
    iVar2 = FUN_0047deac();
    if (-1 < iVar2) {
      *pcVar1 = '\x01';
      return 1;
    }
    iVar2 = *param_1;
    software_interrupt(0x23);
  }
  else {
    iVar2 = *param_1;
    software_interrupt(0x23);
  }
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_002db4fc,0,&DAT_002db4fc);
    FUN_002fb928(0);
  }
  return 0;
}
