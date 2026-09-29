// OoT3D decomp @ 002fa0a8  name=FUN_002fa0a8  size=152

int FUN_002fa0a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char local_18 [4];

  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = FUN_0044b108(param_1,param_2,param_3,param_4,local_18);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_002fa140,0,&DAT_002fa140);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_002fa144 >> 0x1b;
  if ((*DAT_002fa144 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  return (int)local_18[0];
}
