// OoT3D decomp @ 0019ef00  name=FUN_0019ef00  size=192

void FUN_0019ef00(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;

  iVar3 = DAT_0019efd0;
  uVar2 = DAT_0019efcc;
  iVar4 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(param_1 + 0x1ac) == 1) {
    *(undefined4 *)(iVar4 + 0x28) = DAT_0019efc0;
    *(undefined4 *)(iVar4 + 0x2c) = DAT_0019efc4;
    *(undefined4 *)(iVar4 + 0x30) = DAT_0019efc8;
    uVar1 = (undefined2)uVar2;
    *(undefined2 *)(iVar4 + 0xbe) = uVar1;
    *(undefined2 *)(iVar4 + 0x36) = uVar1;
    *(undefined2 *)(iVar3 + iVar4) = uVar1;
    *(undefined2 *)(iVar4 + 0xc0) = 0;
    *(undefined2 *)(iVar4 + 0x38) = 0;
    *(undefined2 *)(iVar4 + 0xbc) = 0;
    *(undefined2 *)(iVar4 + 0x34) = 0;
    FUN_0034557c(param_2,0xf);
    *(undefined2 *)(param_1 + 0x1ae) = 0;
    puVar5 = (undefined2 *)(param_1 + 0x1b0);
    iVar3 = 3;
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    do {
      puVar5[1] = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 2;
      *puVar5 = 0;
      iVar4 = 0;
    } while (iVar3 != 0);
    do {
      iVar3 = param_1 + iVar4 * 4;
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)(iVar3 + 500) + 0x1b4) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0x1f8) + 0x1b4) = 0;
    } while (iVar4 < 10);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0019efd4;
  }
  return;
}
