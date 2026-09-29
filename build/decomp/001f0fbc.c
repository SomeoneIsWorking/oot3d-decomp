// OoT3D decomp @ 001f0fbc  name=FUN_001f0fbc  size=400

void FUN_001f0fbc(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;

  uVar2 = DAT_001f1154;
  *(undefined4 *)(DAT_001f1150 + param_1) = DAT_001f114c;
  FUN_0037572c(uVar2);
  puVar1 = (undefined1 *)(param_1 + 0x19c);
  iVar4 = 0x32;
  do {
    puVar1[0x4c] = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 0x98;
    *puVar1 = 0;
  } while (iVar4 != 0);
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x1aa) = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 5;
  *(undefined2 *)(param_1 + 0x1ae) = 0xff9c;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001f1158 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  param_2 = param_2 + 0x10;
  if (((*DAT_001f115c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_001f115c), iVar4 != 0)) {
    FUN_0036788c(DAT_001f1160);
  }
  iVar4 = 0;
  piVar5 = *(int **)(DAT_001f1160 + 0x17c);
  piVar5[2] = *(int *)(param_1 + 0x178);
  do {
    uVar2 = ObjectBankArchive_00358ef8(param_2,iVar4);
    iVar3 = (**(code **)(*piVar5 + 8))(piVar5,uVar2,1);
    *(int *)(param_1 + iVar4 * 4 + 0x1f68) = iVar3;
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    uVar2 = FUN_00372f0c(param_2,iVar4);
    FUN_00372d94(uVar6,uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  iVar4 = 0;
  do {
    uVar2 = ObjectBankArchive_00358ef8(param_2,2);
    uVar2 = (**(code **)(*piVar5 + 8))(piVar5,uVar2,1);
    iVar3 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar3 + 0x1f70) = uVar2;
  } while (iVar4 < 100);
  piVar5[2] = 0;
  return;
}
