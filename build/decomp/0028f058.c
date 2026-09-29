// OoT3D decomp @ 0028f058  name=FUN_0028f058  size=432

void FUN_0028f058(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_0028f0f4;
  if (*(short *)(param_1 + 0x1c) == 3) {
    iVar3 = FUN_003736fc(DAT_0028f104,DAT_0028f0f0,param_1 + 0x1a4);
  }
  else {
    if (*(short *)(param_1 + 0x1c) != 5) goto LAB_0028f0c0;
    iVar3 = FUN_003736fc(DAT_0028f0f8,DAT_0028f0f0,param_1 + 0x1a4);
  }
  if (iVar3 != 0) {
    FUN_0037547c(uVar2,param_1 + 0x28,4,DAT_0028f100,DAT_0028f100,DAT_0028f0fc);
  }
LAB_0028f0c0:
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_00326e70;
  puVar4 = (ushort *)0x0;
  if (iVar3 != 0) {
    puVar4 = *(ushort **)(param_2 + 0x22ec);
  }
  iVar6 = 0;
  if (iVar3 == 0) {
    puVar4 = (ushort *)0x0;
  }
  if ((puVar4 != (ushort *)0x0) && (uVar5 = (uint)*puVar4, uVar5 != *(uint *)(param_1 + 0x304))) {
    if (uVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2fc) = 3;
      *(undefined4 *)(param_1 + 0x300) = 0;
    }
    else if (uVar5 == 5) {
      iVar3 = FUN_0037571c(param_2);
      if (iVar3 != 0) {
        iVar6 = *(int *)(param_2 + 0x22ec);
      }
      if (iVar6 != 0) {
        uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar7;
        uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar7;
        uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar7;
        uVar1 = *(undefined2 *)(iVar6 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      *(undefined4 *)(param_1 + 0x2fc) = 4;
      *(undefined4 *)(param_1 + 0x300) = 2;
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
    }
    else if (uVar5 == 6) {
      *(undefined4 *)(param_1 + 0x2fc) = 5;
      *(undefined4 *)(param_1 + 0x300) = 2;
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
    }
    else if (uVar5 == 7) {
      FUN_00374428(param_1);
    }
    *(uint *)(param_1 + 0x304) = uVar5;
  }
  return;
}
