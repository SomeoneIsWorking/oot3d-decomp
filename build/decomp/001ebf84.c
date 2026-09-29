// OoT3D decomp @ 001ebf84  name=FUN_001ebf84  size=288

void FUN_001ebf84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  FUN_00350a98(param_2,param_1 + 0x1a4);
  FUN_00350914(param_2,param_1 + 0x1a4,param_1,DAT_001ec0a4);
  *(undefined4 *)(param_1 + 0x284) = DAT_001ec0a8;
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001ec0ac + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_001ec0b0 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_001ec0b0), iVar2 != 0)) {
    FUN_0036788c(DAT_001ec0b4);
  }
  iVar2 = 0;
  piVar4 = *(int **)(DAT_001ec0b4 + 0x17c);
  piVar4[2] = *(int *)(param_1 + 0x178);
  do {
    uVar3 = ObjectBankArchive_00358ef8(param_2 + 0x10,iVar2 + 1);
    uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,1);
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x28c) = uVar3;
    uVar3 = DAT_001ec0c0;
  } while (iVar2 < 2);
  piVar4[2] = 0;
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  return;
}
