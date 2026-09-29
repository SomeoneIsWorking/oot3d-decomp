// OoT3D decomp @ 003018cc  name=FUN_003018cc  size=184

void FUN_003018cc(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  puVar4 = DAT_0030194c;
  puVar5 = (undefined4 *)(param_1 + 0xfU & 0xfffffff0);
  uVar3 = param_2 - ((int)puVar5 - param_1) & 0xfffffff0;
  DAT_0030194c[1] = uVar3;
  *puVar4 = puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined2 *)(puVar5 + 1) = 1;
  puVar4[2] = 1;
  puVar5[2] = puVar5;
  puVar5[3] = puVar5;
  puVar5[8] = uVar3;
  iVar2 = DAT_00301950;
  *(int *)(DAT_00301950 + 0x10) = DAT_00301950;
  *(int *)(iVar2 + 0x14) = iVar2;
  *(undefined4 **)(iVar2 + 0x18) = puVar5;
  *(undefined4 **)(iVar2 + 0x1c) = puVar5;
  puVar5[6] = iVar2;
  puVar5[7] = iVar2;
  puVar4 = (undefined4 *)(iVar2 + 0x24);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = 1;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    return;
  }
  return;
}
