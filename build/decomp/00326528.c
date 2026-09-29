// OoT3D decomp @ 00326528  name=FUN_00326528  size=1336

undefined4 FUN_00326528(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint in_fpscr;

  puVar6 = (ushort *)0x0;
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_00326914;
  uVar1 = DAT_00326910;
  if (iVar3 != 0) {
    puVar6 = *(ushort **)(param_2 + 0x22ec);
  }
  if ((puVar6 != (ushort *)0x0) && (uVar7 = (uint)*puVar6, uVar7 != *(uint *)(param_1 + 0xbc4))) {
    if (uVar7 == 0x10) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x11);
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003239a4(param_1,param_2,4);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0x11,0);
      *(undefined4 *)(param_1 + 3000) = 0x40;
      *(undefined4 *)(param_1 + 0xbbc) = 1;
    }
    else if (uVar7 < 0x11) {
      if (uVar7 == 9) {
        FUN_00374428(param_1);
      }
      else if (uVar7 < 10) {
        if (uVar7 == 1) {
          *(undefined4 *)(param_1 + 3000) = 0x39;
          *(undefined4 *)(param_1 + 0xbbc) = 0;
          *(undefined1 *)(param_1 + 0xd0) = 0;
        }
        else if (uVar7 == 6) {
          uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
          *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
          uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
          FUN_003239a4(param_1,param_2,4);
          FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0);
          *(undefined4 *)(param_1 + 3000) = 0x3a;
          *(undefined4 *)(param_1 + 0xbbc) = 5;
          *(undefined1 *)(param_1 + 0xd0) = 0xff;
        }
      }
      else if (uVar7 == 0xe) {
        iVar3 = param_1 + 0x1a4;
        uVar4 = FUN_0036ae14(iVar3,0);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar2,uVar1,uVar4,uVar1,iVar3,0);
        FUN_003239a4(param_1,param_2,4);
        uVar5 = (uint)*(byte *)(param_1 + 0x219);
        *(undefined4 *)(param_1 + 0x208) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0xc);
        *(undefined4 *)(param_1 + 0x20c) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x1c);
        *(undefined4 *)(param_1 + 0x210) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x2c);
        *(undefined4 *)(param_1 + 0x1fc) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0xc);
        *(undefined4 *)(param_1 + 0x200) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x1c);
        *(undefined4 *)(param_1 + 0x204) =
             *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x2c);
        *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
        FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
        uVar4 = FUN_0036ae14(iVar3,0xf);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar2,uVar1,uVar4,uVar1,iVar3,0xf,2);
        *(undefined4 *)(param_1 + 3000) = 0x3d;
        *(undefined4 *)(param_1 + 0xbbc) = 1;
      }
      else if (uVar7 == 0xf) {
        uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x10);
        *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_003239a4(param_1,param_2,4);
        FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0x10,2);
        *(undefined4 *)(param_1 + 3000) = 0x3f;
        *(undefined4 *)(param_1 + 0xbbc) = 1;
      }
    }
    else if (uVar7 == 0x11) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003239a4(param_1,param_2,4);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 3000) = 0x41;
      *(undefined4 *)(param_1 + 0xbbc) = 1;
    }
    else if (uVar7 == 0x12) {
      FUN_003239a4(param_1,param_2,4);
      uVar5 = (uint)*(byte *)(param_1 + 0x219);
      *(undefined4 *)(param_1 + 0x208) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0xc);
      *(undefined4 *)(param_1 + 0x20c) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x1c);
      *(undefined4 *)(param_1 + 0x210) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x2c);
      *(undefined4 *)(param_1 + 0x1fc) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0xc);
      *(undefined4 *)(param_1 + 0x200) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x1c);
      *(undefined4 *)(param_1 + 0x204) =
           *(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar5 * 0x34 + 0x2c);
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
      FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0xe);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0xe,2);
      *(undefined4 *)(param_1 + 3000) = 0x3c;
      *(undefined4 *)(param_1 + 0xbbc) = 1;
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
    }
    else if (uVar7 == 0x13) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x10);
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003239a4(param_1,param_2,4);
      FUN_00375c08(uVar2,uVar1,uVar4,uVar1,param_1 + 0x1a4,0x10,2);
      *(undefined4 *)(param_1 + 3000) = 0x3e;
      *(undefined4 *)(param_1 + 0xbbc) = 1;
    }
    else if (uVar7 == 0x14) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0xd);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar2,uVar1,uVar4,DAT_00326918,param_1 + 0x1a4,0xd,2);
      *(undefined4 *)(param_1 + 3000) = 0x3b;
      *(undefined4 *)(param_1 + 0xbbc) = 1;
    }
    *(uint *)(param_1 + 0xbc4) = uVar7;
    return 1;
  }
  return 0;
}
