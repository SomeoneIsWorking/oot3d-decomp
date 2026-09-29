// OoT3D decomp @ 0048a53c  name=FUN_0048a53c  size=100

void FUN_0048a53c(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;

  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  bVar4 = (param_5 & 2) != 0;
  *(undefined4 **)(param_1 + 0x24) = (undefined4 *)(param_5 & 0xff);
  puVar2 = (undefined4 *)(param_5 & 0xff);
  if (bVar4) {
    puVar2 = DAT_0048a5a0;
  }
  if (bVar4) {
    FUN_00303b14(param_3,param_4 - param_3,*puVar2);
  }
  iVar3 = DAT_0048a5a4;
  iVar1 = FUN_002c3130(DAT_0048a5a4,param_1);
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x18;
  }
  FUN_0030cab0(iVar3,iVar3 + 4,param_1 + 4);
  return;
}
