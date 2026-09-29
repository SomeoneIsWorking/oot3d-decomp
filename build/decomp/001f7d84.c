// OoT3D decomp @ 001f7d84  name=FUN_001f7d84  size=752

void FUN_001f7d84(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;

  FUN_00372f38(param_1,param_2,param_1 + 0x638,1,0);
  FUN_003510b0(param_1,DAT_001f8074);
  FUN_0037572c(DAT_001f8078,param_1);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x430,10);
  FUN_00372d4c(DAT_001f8084,DAT_001f807c,param_1 + 0xbc,DAT_001f8080);
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 6;
  *(undefined4 *)(param_1 + 0xa0) = DAT_001f8088;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x68c,param_1,DAT_001f808c);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x754,param_1,DAT_001f8090);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x6e4,param_1,DAT_001f8094,param_1 + 0x704);
  *(undefined4 *)(param_1 + 0x668) = DAT_001f8098;
  uVar4 = DAT_001f80ac;
  *(undefined4 *)(param_1 + 0x664) = DAT_001f809c;
  uVar2 = DAT_001f80b0;
  *(undefined4 *)(param_1 + 0xfc) = DAT_001f80a0;
  *(undefined4 *)(param_1 + 0x100) = DAT_001f80a4;
  *(undefined4 *)(param_1 + 0x104) = DAT_001f80a8;
  *(undefined1 *)(param_1 + 0x123) = 0x48;
  uVar3 = DAT_001f80c8;
  uVar5 = DAT_001f80b4;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == -1) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar4,uVar2,uVar5,uVar4,param_1 + 0x1a4,0,2);
    *(undefined2 *)(param_1 + 0x684) = 900;
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined2 *)(param_1 + 0x686) = 0;
    *(undefined4 *)(param_1 + 0x63c) = 3;
    *(byte *)(param_1 + 0x69d) = *(byte *)(param_1 + 0x69d) & 0xfd;
    uVar4 = DAT_001f80d0;
  }
  else {
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = DAT_001f80d4;
      *(undefined4 *)(param_1 + 0x668) = DAT_001f80d8;
      *(undefined4 *)(param_1 + 0x664) = DAT_001f80dc;
      uVar5 = FUN_0036ae14(param_1 + 0x1a4,0);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,uVar2,uVar5,uVar4,param_1 + 0x1a4,0,2);
      *(undefined2 *)(param_1 + 0x684) = 600;
      *(undefined4 *)(param_1 + 0x660) = 0;
      *(undefined2 *)(param_1 + 0x686) = 0;
      *(undefined4 *)(param_1 + 0x63c) = 4;
      *(undefined4 *)(param_1 + 0x644) = DAT_001f80e0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    if (sVar1 != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x5c) = DAT_001f80b4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)(param_1 + 0x58) = DAT_001f80b8;
    *(undefined4 *)(param_1 + 0x6cc) = DAT_001f80bc;
    *(undefined4 *)(param_1 + 0x6d0) = DAT_001f80c0;
    *(undefined4 *)(param_1 + 0x6d4) = DAT_001f80c4;
    *(undefined4 *)(param_1 + 0x6ac) = uVar3;
    *(undefined1 *)(param_1 + 0x764) = 0x11;
    *(undefined1 *)(param_1 + 0x765) = 9;
    *(undefined1 *)(param_1 + 0x123) = 0x49;
    FUN_0036e734(param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 0x63c) = 0xe;
    uVar4 = DAT_001f80cc;
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  *(undefined4 *)(param_1 + 0x644) = uVar4;
  return;
}
