// OoT3D decomp @ 0032d27c  name=FUN_0032d27c  size=128

void FUN_0032d27c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_0032d2fc + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x9bc),5,0x1000);
  uVar2 = DAT_0032d304;
  uVar1 = DAT_0032d300;
  *(short *)(param_1 + 0x9be) = *(short *)(param_1 + 0x9be) + 1;
  FUN_003705a0(uVar2,uVar1,param_1 + 0x998);
  FUN_0036bee0(*(float *)(param_1 + 0x998) * *(float *)(param_1 + 0x998),
               *(float *)(iVar3 + 0xf4) + DAT_0032d308,DAT_0032d310,DAT_0032d30c,param_2);
  return;
}
