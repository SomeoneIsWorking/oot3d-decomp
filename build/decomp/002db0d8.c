// OoT3D decomp @ 002db0d8  name=FUN_002db0d8  size=252

void FUN_002db0d8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  iVar2 = param_2;
  if (((*DAT_002db1d4 & 1) == 0) &&
     (uVar4 = FUN_003679b4(DAT_002db1d4), iVar2 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0))
  {
    FUN_0036788c(DAT_002db1d8);
    iVar2 = DAT_002db1e0;
  }
  uVar3 = *(undefined4 *)(DAT_002db1e4 + 0x47c);
  FUN_00305224(param_1,iVar2);
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x78) = param_3;
  uVar1 = BoardModelFactory_0034897c(uVar3,*(int *)(param_2 + param_3 * 4) + 4,0);
  *(undefined4 *)(param_1 + 100) = uVar1;
  iVar2 = BoardModelFactory_0034897c(uVar3,*(int *)(param_2 + param_3 * 4) + 0x1bc,0);
  uVar1 = DAT_002db1e8;
  *(int *)(param_1 + 0x68) = iVar2;
  uVar3 = DAT_002db1ec;
  *(undefined4 *)(iVar2 + 0xf0) = uVar1;
  *(undefined4 *)(iVar2 + 0xf4) = uVar1;
  *(undefined4 *)(iVar2 + 0xf8) = uVar1;
  *(undefined4 *)(iVar2 + 0xfc) = uVar3;
  *(uint *)(*(int *)(param_1 + 100) + 0x178) = *(uint *)(*(int *)(param_1 + 100) + 0x178) | 0x18;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = *(uint *)(*(int *)(param_1 + 0x68) + 0x178) | 0x18;
  *(int *)(param_1 + 0x60) = param_1 + 0x74;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(param_2 + param_3 * 4) + 900);
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}
