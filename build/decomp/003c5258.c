// OoT3D decomp @ 003c5258  name=FUN_003c5258  size=616

void FUN_003c5258(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint in_fpscr;

  iVar8 = FUN_0036bba8(param_2,0x18);
  FUN_003685f4(param_1,param_2);
  uVar1 = *(undefined2 *)(param_1 + 0x116);
  iVar9 = FUN_0036bc98(param_1,param_2);
  if (iVar9 == 0) {
    *(undefined2 *)(param_1 + 0x116) = uVar1;
    uVar2 = DAT_003c54dc;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601)
       && (*(int *)(param_1 + 0x98) < DAT_003c54d8)) {
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
      FUN_0036bb28(uVar2,param_1,param_2);
    }
  }
  else {
    FUN_00375bcc(param_1,DAT_003c54c0);
    uVar5 = DAT_003c54d4;
    uVar10 = DAT_003c54d0;
    uVar4 = DAT_003c54cc;
    uVar3 = DAT_003c54c8;
    uVar2 = DAT_003c54c4;
    if (iVar8 == 0) {
      *(ushort *)(DAT_003c54e0 + 0x1e) = *(ushort *)(DAT_003c54e0 + 0x1e) | 0x4000;
      uVar7 = DAT_003c54ec;
      uVar6 = DAT_003c54e8;
      uVar5 = DAT_003c54e4;
      uVar10 = DAT_003c54d4;
      uVar11 = *(ushort *)(param_1 + 0x116) - 0x207e;
      if (uVar11 < 2) {
        *(undefined2 *)(param_1 + 0xc10) = 1;
        *(undefined4 *)(param_1 + 0xbac) = uVar6;
        *(undefined4 *)(param_1 + 0xbb0) = uVar10;
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
        uVar10 = FUN_0036ae14(param_1 + 0x1a4,6);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar4,uVar3,uVar10,uVar2,param_1 + 0x1a4,6,2);
      }
      else if (uVar11 == 0xd) {
        *(undefined2 *)(param_1 + 0xc10) = 1;
        *(undefined4 *)(param_1 + 0xbac) = uVar5;
        *(undefined4 *)(param_1 + 0xbb0) = uVar10;
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
        uVar10 = FUN_0036ae14(param_1 + 0x1a4,6);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar4,uVar3,uVar10,uVar2,param_1 + 0x1a4,6,2);
      }
      else {
        *(undefined2 *)(param_1 + 0xc10) = 1;
        *(undefined4 *)(param_1 + 0xbac) = uVar7;
        *(undefined4 *)(param_1 + 0xbb0) = uVar10;
        *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
        uVar10 = FUN_0036ae14(param_1 + 0x1a4,6);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar4,uVar3,uVar10,uVar2,param_1 + 0x1a4,6,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xc10) = 1;
      *(undefined4 *)(param_1 + 0xbac) = uVar10;
      *(undefined4 *)(param_1 + 0xbb0) = uVar5;
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
      uVar10 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,uVar3,uVar10,uVar2,param_1 + 0x1a4,6,2);
    }
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xfffe;
  return;
}
