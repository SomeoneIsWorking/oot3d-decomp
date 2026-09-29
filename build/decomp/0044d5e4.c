// OoT3D decomp @ 0044d5e4  name=FUN_0044d5e4  size=396

undefined4 * FUN_0044d5e4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;

  puVar1 = DAT_0044d770;
  uVar6 = param_1 + 0x3fU & 0xfffffff0;
  puVar4 = (undefined4 *)DAT_0044d770[7];
  while( true ) {
    iVar2 = puVar4[8] - uVar6;
    if (iVar2 == 0) {
      *(undefined4 *)(puVar4[6] + 0x1c) = puVar4[7];
      *(undefined4 *)(puVar4[7] + 0x18) = puVar4[6];
      *puVar4 = 0;
      *(undefined2 *)((int)puVar4 + 6) = 0;
      *(undefined2 *)(puVar4 + 1) = 1;
      puVar4[8] = -puVar4[8];
      return puVar4 + 0xc;
    }
    if (0 < iVar2) break;
    puVar4 = (undefined4 *)puVar4[7];
    if (puVar4 == DAT_0044d770) {
      return (undefined4 *)0x0;
    }
  }
  if (iVar2 < 0x31) {
    *(undefined4 *)(puVar4[6] + 0x1c) = puVar4[7];
    *(undefined4 *)(puVar4[7] + 0x18) = puVar4[6];
    *puVar4 = 0;
    *(undefined2 *)((int)puVar4 + 6) = 0;
    *(undefined2 *)(puVar4 + 1) = 1;
    puVar4[8] = -puVar4[8];
  }
  else {
    puVar5 = (undefined4 *)((int)puVar4 + uVar6);
    *(undefined4 *)(puVar4[6] + 0x1c) = puVar4[7];
    *(undefined4 *)(puVar4[7] + 0x18) = puVar4[6];
    *puVar4 = 0;
    *(undefined2 *)((int)puVar4 + 6) = 0;
    *(undefined2 *)(puVar4 + 1) = 1;
    puVar4[8] = -uVar6;
    *puVar5 = 0;
    *(undefined2 *)((int)puVar5 + 6) = 0;
    *(undefined2 *)(puVar5 + 1) = 1;
    puVar5[8] = iVar2;
    puVar5[2] = puVar4;
    *(undefined4 **)(puVar4[3] + 8) = puVar5;
    puVar5[3] = puVar4[3];
    puVar4[3] = puVar5;
    puVar3 = (undefined4 *)puVar5[2];
    iVar2 = puVar3[8];
    while (iVar2 < 1) {
      puVar3 = (undefined4 *)puVar3[2];
      iVar2 = puVar3[8];
    }
    if (puVar3 == puVar5) {
      iVar2 = puVar1[6];
      *(undefined4 **)(iVar2 + 0x1c) = puVar5;
      puVar5[6] = iVar2;
      puVar5[7] = puVar1;
      puVar1[6] = puVar5;
    }
    else {
      *(undefined4 **)(puVar3[7] + 0x18) = puVar5;
      puVar5[6] = puVar3;
      puVar5[7] = puVar3[7];
      puVar3[7] = puVar5;
    }
    *(int *)(DAT_0044d774 + 8) = *(int *)(DAT_0044d774 + 8) + 1;
  }
  return puVar4 + 0xc;
}
