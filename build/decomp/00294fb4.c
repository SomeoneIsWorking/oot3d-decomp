// OoT3D decomp @ 00294fb4  name=FUN_00294fb4  size=116

void FUN_00294fb4(int param_1)

{
  short sVar1;
  int iVar2;

  sVar1 = *(short *)(param_1 + DAT_0029502c);
  iVar2 = param_1 + 0x9e4;
  FUN_0035e3a4(iVar2,0,(int)*(short *)(param_1 + DAT_00295028));
  FUN_0035e3a4(iVar2,1,(int)sVar1);
  FUN_0035e330(iVar2);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00295034,DAT_00295030,param_1,0);
  return;
}
