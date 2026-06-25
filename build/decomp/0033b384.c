// OoT3D decomp @ 0033b384  name=FUN_0033b384  size=344

undefined4 FUN_0033b384(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  
  uVar1 = *(uint *)(param_2 + 0x1710);
  bVar6 = (uVar1 & 0x20c00000) == 0;
  if (bVar6) {
    uVar1 = (uint)*(byte *)(DAT_0033b4dc + param_1);
  }
  if ((((((bVar6 && uVar1 == 0) && (*(char *)(param_2 + 0x1a9) == *(char *)(param_2 + 0x1ac))) &&
        (*(char *)(param_2 + 0x1a6) != '\0')) &&
       ((iVar2 = FUN_0035d2d4(param_2), iVar2 == 0 && (*(int *)(param_2 + 0x1708) != DAT_0033b4e0)))
       ) && ((iVar2 = FUN_003518cc(param_2), iVar2 != 0 ||
             (((*(uint *)(param_2 + 0x1710) & DAT_0033b4e4) != 0 ||
              (*(int *)(param_2 + 0x1708) == DAT_0033b4e8)))))) &&
     ((*(int *)(param_2 + 0x284) != 0x38 && ((**(uint **)(param_2 + 0x29c8) & 0x100) != 0)))) {
    FUN_0035d27c(param_2,DAT_0033b4ec);
    FUN_0036b02c(param_1,param_2);
    if (*(int *)(param_2 + 0x225c) < 0x3f000000) {
      iVar3 = FUN_0035d260(param_2);
      iVar2 = DAT_0033b4f0;
    }
    else {
      iVar3 = FUN_0035d260(param_2);
      iVar2 = DAT_0033b4f4;
    }
    uVar5 = *(undefined4 *)(iVar2 + iVar3 * 4);
    uVar4 = FUN_003603c0(param_2 + 0x254,uVar5);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(DAT_0033b4fc,uVar4,uVar4,DAT_0033b4f8,param_2 + 0x1764,param_1,uVar5,2);
    FUN_0036f59c(param_2,DAT_0033b500);
    return 1;
  }
  return 0;
}

