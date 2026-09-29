// OoT3D decomp @ 00163818  name=FUN_00163818  size=516

void FUN_00163818(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  puVar1 = (undefined4 *)(param_1 + 0x2754);
  iVar6 = 0x32;
  do {
    puVar1[1] = 3;
    iVar6 = iVar6 + -1;
    puVar1 = puVar1 + 2;
    *puVar1 = 3;
  } while (iVar6 != 0);
  uVar2 = FUN_00352ee0(param_1,param_2,100,param_1 + 0x25c8,param_1 + 0x2758);
  uVar5 = DAT_00163a54;
  iVar6 = 0;
  do {
    iVar3 = *(int *)(param_1 + iVar6 * 4 + 0x25c8);
    *(int *)(param_1 + iVar6 * 0x3c + 0xe90) = iVar3;
    iVar3 = *(int *)(iVar3 + 0xc);
    uVar4 = FUN_00372f0c(uVar2,1);
    FUN_00372d94(iVar3,uVar4);
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
  } while (iVar6 < 100);
  iVar6 = FUN_0035010c(0x28);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = FUN_003500c4();
  }
  *(undefined4 *)(param_1 + 0x28e8) = uVar5;
  FUN_0034ff2c(uVar5,4,4,100,1,0);
  FUN_0034fea8(*(undefined4 *)(param_1 + 0x28e8),0,param_2,0x10,DAT_00163a5c,DAT_00163a5c,
               DAT_00163a58,DAT_00163a58);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x638,param_1 + 0xa48,0x14);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc);
  uVar5 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x228),uVar5);
  uVar4 = DAT_00163a6c;
  uVar2 = DAT_00163a68;
  *(undefined4 *)(*(int *)(param_1 + 0x228) + 0xc) = DAT_00163a60;
  uVar5 = DAT_00163a64;
  *(undefined1 *)(*(int *)(param_1 + 0x228) + 0x10) = 1;
  FUN_00372d4c(uVar4,uVar5,param_1 + 0xbc,uVar2);
  FUN_00350eb8(param_2,param_1 + 0x230);
  FUN_00350d48(param_2,param_1 + 0x230,param_1,DAT_00163a70,param_1 + 0x250);
  uVar5 = FUN_0035011c(0xf);
  FUN_00350318(param_1 + 0xa0,uVar5,DAT_00163a74);
  uVar5 = DAT_00163a78;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | 0x1000000;
  FUN_0037572c(uVar5,param_1);
  *(undefined4 *)(param_1 + 0x70) = DAT_00163a7c;
  *(undefined2 *)(param_1 + 0x618) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
