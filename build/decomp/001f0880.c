// OoT3D decomp @ 001f0880  name=FUN_001f0880  size=220

void FUN_001f0880(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r6;
  uint in_fpscr;
  undefined4 uVar6;

  iVar2 = FUN_0037571c(param_2);
  puVar3 = (ushort *)0x0;
  if (iVar2 != 0) {
    puVar3 = *(ushort **)(param_2 + 0x22f0);
  }
  iVar5 = 0;
  if (iVar2 == 0) {
    puVar3 = (ushort *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (ushort *)0x0) {
    unaff_r6 = (uint)*puVar3;
    uVar4 = *(uint *)(param_1 + 0x1ac);
  }
  if (puVar3 != (ushort *)0x0 && unaff_r6 != uVar4) {
    if (unaff_r6 == 1) {
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    else if (unaff_r6 == 2) {
      iVar2 = FUN_0037571c(param_2);
      if (iVar2 != 0) {
        iVar5 = *(int *)(param_2 + 0x22f0);
      }
      if (iVar5 != 0) {
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar6;
        uVar1 = *(undefined2 *)(iVar5 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0x1a4) = 1;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
    }
    else if (unaff_r6 == 3) {
      *(undefined4 *)(param_1 + 0x1a4) = 2;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
    }
    *(uint *)(param_1 + 0x1ac) = unaff_r6;
  }
  return;
}
