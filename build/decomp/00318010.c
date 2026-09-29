// OoT3D decomp @ 00318010  name=FUN_00318010  size=688

void FUN_00318010(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;

  iVar4 = FUN_0037571c(param_2);
  uVar6 = DAT_003182c8;
  uVar3 = DAT_003182c4;
  uVar2 = DAT_003182c0;
  puVar5 = (ushort *)0x0;
  if (iVar4 != 0) {
    puVar5 = *(ushort **)(&DAT_000022e0 + param_2);
  }
  iVar8 = 0;
  if (iVar4 == 0) {
    puVar5 = (ushort *)0x0;
  }
  if (puVar5 == (ushort *)0x0) {
    return;
  }
  uVar7 = (uint)*puVar5;
  if (uVar7 == *(uint *)(param_1 + 0xcfc)) {
    return;
  }
  if (uVar7 == 0xb) {
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x10);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1a4,0x10,2);
    *(undefined4 *)(param_1 + 0xce8) = 0xf;
    *(undefined4 *)(param_1 + 0xcec) = 3;
LAB_00318250:
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
  }
  else {
    if (uVar7 < 0xc) {
      if (uVar7 == 1) {
        *(undefined4 *)(param_1 + 0xce8) = 0xd;
        *(undefined4 *)(param_1 + 0xcec) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
        goto LAB_003182b0;
      }
      if (uVar7 == 9) {
        *(undefined4 *)(param_1 + 0xce8) = 0x13;
        *(undefined4 *)(param_1 + 0xcec) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
        goto LAB_003182b0;
      }
      if (uVar7 != 10) goto LAB_003182b0;
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,0x10);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      iVar4 = FUN_0037571c(param_2);
      if (iVar4 != 0) {
        iVar8 = *(int *)(&DAT_000022e0 + param_2);
      }
      if (iVar8 != 0) {
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar8 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar9;
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
        uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        uVar1 = *(undefined2 *)(iVar8 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
      }
      FUN_00375c08(uVar3,uVar2,uVar6,uVar2,param_1 + 0x1a4,0x10,2);
      *(undefined4 *)(param_1 + 0xce8) = 0xe;
      *(undefined4 *)(param_1 + 0xcec) = 3;
    }
    else {
      if (uVar7 == 0xc) {
        uVar9 = FUN_0036ae14(param_1 + 0x1a4,6);
        uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar3,uVar2,uVar9,uVar6,param_1 + 0x1a4,6,2);
        *(undefined4 *)(param_1 + 0xce8) = 0x10;
        *(undefined4 *)(param_1 + 0xcec) = 1;
        goto LAB_00318250;
      }
      if (uVar7 != 0xd) {
        if (uVar7 == 0xe) {
          uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xd);
          uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(uVar3,uVar2,uVar9,uVar6,param_1 + 0x1a4,0xd,2);
          *(undefined4 *)(param_1 + 0xce8) = 0x12;
          *(undefined4 *)(param_1 + 0xcec) = 4;
          *(undefined1 *)(param_1 + 0xd0) = 0xff;
        }
        goto LAB_003182b0;
      }
      uVar9 = FUN_0036ae14(param_1 + 0x1a4,4);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar9,uVar6,param_1 + 0x1a4,4,2);
      *(undefined4 *)(param_1 + 0xce8) = 0x11;
      *(undefined4 *)(param_1 + 0xcec) = 4;
    }
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
  }
LAB_003182b0:
  *(uint *)(param_1 + 0xcfc) = uVar7;
  return;
}
