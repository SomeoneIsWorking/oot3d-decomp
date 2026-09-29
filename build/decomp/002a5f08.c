// OoT3D decomp @ 002a5f08  name=FUN_002a5f08  size=232

void FUN_002a5f08(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint unaff_r6;
  uint in_fpscr;
  undefined4 uVar6;
  undefined8 uVar7;

  uVar7 = FUN_0037571c(param_2);
  puVar4 = (ushort *)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7;
  if (uVar2 != 0) {
    puVar4 = *(ushort **)(param_2 + 0x22e8);
  }
  iVar5 = 0;
  if (uVar2 == 0) {
    puVar4 = (ushort *)0x0;
  }
  if (puVar4 != (ushort *)0x0) {
    unaff_r6 = (uint)*puVar4;
    uVar2 = *(uint *)(param_1 + 0xdcc);
  }
  if (puVar4 != (ushort *)0x0 && unaff_r6 != uVar2) {
    if (unaff_r6 == 7) {
      iVar3 = FUN_0037571c(param_2);
      if (iVar3 != 0) {
        iVar5 = *(int *)(param_2 + 0x22e8);
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
      *(undefined4 *)(param_1 + 0xdb8) = 0xb;
      *(undefined4 *)(param_1 + 0xdbc) = 2;
    }
    else if (unaff_r6 == 8) {
      FUN_00347ed4(DAT_002a5ff0,param_1,DAT_002a5ff4,2,0);
      *(undefined4 *)(param_1 + 0xdb8) = 0xd;
    }
    *(uint *)(param_1 + 0xdcc) = unaff_r6;
  }
  return;
}
