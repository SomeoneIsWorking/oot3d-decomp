// OoT3D decomp @ 00323a3c  name=FUN_00323a3c  size=428

void FUN_00323a3c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;

  puVar4 = (ushort *)0x0;
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    puVar4 = *(ushort **)(param_2 + 0x22f0);
  }
  if ((puVar4 != (ushort *)0x0) && (uVar6 = (uint)*puVar4, uVar6 != *(uint *)(param_1 + 0xbc8))) {
    switch(uVar6) {
    case 1:
      *(undefined4 *)(param_1 + 0xbb4) = 10;
      *(undefined4 *)(param_1 + 3000) = 0;
      break;
    case 2:
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,3);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(DAT_00323c14,DAT_00323c10,uVar3,DAT_00323c10,param_1 + 0x1a4,DAT_00323c18,0);
      iVar5 = 0;
      iVar2 = FUN_0037571c(param_2);
      if (iVar2 != 0) {
        iVar5 = *(int *)(param_2 + 0x22f0);
      }
      if (iVar5 != 0) {
        uVar3 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar3;
        uVar3 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        uVar3 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar3;
        uVar1 = *(undefined2 *)(iVar5 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0xbb4) = 0xb;
      *(undefined4 *)(param_1 + 3000) = 1;
      break;
    case 7:
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(DAT_00323c14,DAT_00323c10,uVar3,DAT_00323c1c,param_1 + 0x1a4,DAT_00323c20,2);
      *(undefined4 *)(param_1 + 0xbb4) = 0xc;
      *(undefined4 *)(param_1 + 3000) = 1;
      *(undefined2 *)(param_1 + 0xc30) = 1;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0xbb4) = 0xd;
      *(undefined4 *)(param_1 + 3000) = 1;
      break;
    case 9:
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(DAT_00323c24,uVar3,DAT_00323c10,DAT_00323c1c,param_1 + 0x1a4,DAT_00323c20,2);
      *(undefined4 *)(param_1 + 0xbb4) = 0xe;
      *(undefined4 *)(param_1 + 3000) = 1;
    }
    *(uint *)(param_1 + 0xbc8) = uVar6;
  }
  return;
}
