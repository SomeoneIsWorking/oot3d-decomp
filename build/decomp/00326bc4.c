// OoT3D decomp @ 00326bc4  name=FUN_00326bc4  size=380

void FUN_00326bc4(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 uVar8;

  puVar5 = (ushort *)0x0;
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_00326d44;
  uVar8 = DAT_00326d40;
  if (iVar3 != 0) {
    puVar5 = *(ushort **)(param_2 + 0x22f0);
  }
  if ((puVar5 != (ushort *)0x0) && (uVar7 = (uint)*puVar5, uVar7 != *(uint *)(param_1 + 0xbc8))) {
    if (uVar7 == 1) {
      *(undefined4 *)(param_1 + 0xbb4) = 0xf;
      *(undefined4 *)(param_1 + 3000) = 0;
    }
    else if (uVar7 == 2) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,uVar8,uVar4,uVar8,param_1 + 0x1a4,DAT_00326d48,0);
      iVar6 = 0;
      iVar3 = FUN_0037571c(param_2);
      if (iVar3 != 0) {
        iVar6 = *(int *)(param_2 + 0x22f0);
      }
      if (iVar6 != 0) {
        uVar8 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar8;
        uVar8 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        uVar8 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar8;
        uVar1 = *(undefined2 *)(iVar6 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0xbb4) = 0x10;
      *(undefined4 *)(param_1 + 3000) = 1;
    }
    else if (uVar7 == 10) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,uVar8,uVar4,DAT_00326d4c,param_1 + 0x1a4,DAT_00326d50,2);
      *(undefined4 *)(param_1 + 0xbb4) = 0x11;
      *(undefined4 *)(param_1 + 3000) = 1;
    }
    else if (uVar7 == 0xb) {
      FUN_00374428(param_1);
    }
    *(uint *)(param_1 + 0xbc8) = uVar7;
  }
  return;
}
