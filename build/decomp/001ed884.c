// OoT3D decomp @ 001ed884  name=FUN_001ed884  size=644

void FUN_001ed884(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  
  FUN_003510b0(param_1,DAT_001edb08);
  FUN_00372d4c(DAT_001edb14,DAT_001edb0c,param_1 + 0xbc,DAT_001edb10);
  uVar2 = FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0x11,0,0,0);
  FUN_0036e734(param_1 + 0x1a4,0x11);
  puVar1 = DAT_001edb1c;
  uVar4 = DAT_001edb18;
  *(undefined4 *)(param_1 + 0x1050) = DAT_001edb18;
  *(undefined4 *)(param_1 + 0x1054) = uVar4;
  *(undefined *)(param_1 + 0x219) = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001edb1c), iVar3 != 0)) {
    FUN_0036788c(DAT_001edb20);
  }
  uVar4 = FUN_00372c90(uVar2,*(undefined4 *)(DAT_001edb2c + 0xf3c));
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  *(undefined *)(param_1 + 0x19b) = 4;
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = DAT_001edb34;
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = DAT_001edb30;
  *(undefined2 *)(param_1 + 0xbc) = 0x8000;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uVar4 = DAT_001edb38;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x294) = uVar4;
  *(undefined4 *)(param_1 + 0x2c0) = uVar4;
  uVar5 = FUN_0036ae14(param_1 + 0x1a4,0x10);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar4,uVar2,uVar5,DAT_001edb3c,param_1 + 0x1a4,0x10,0);
  uVar4 = DAT_001edb48;
  *(undefined4 *)(param_1 + 0x1050) = DAT_001edb40;
  *(undefined4 *)(param_1 + 0x1054) = DAT_001edb44;
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  *(undefined2 *)(param_1 + 0x26c) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 1;
  iVar3 = DAT_001edb50;
  *(undefined *)(DAT_001edb4c + param_2) = 4;
  *(undefined2 *)(iVar3 + param_2) = 0xff;
  *(undefined *)(param_1 + 0xb7) = 10;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0xb78,param_1,DAT_001edb54,param_1 + 0xb98);
  iVar3 = FUN_0035b164();
  if ((iVar3 != 1) &&
     (iVar3 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_001edb58 + param_2)), iVar3 != 0)) {
    FUN_00374428(param_1);
    uVar4 = DAT_001edb5c;
    FUN_0036aa20(uVar2,DAT_001edb5c,uVar2,param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,0);
    FUN_003738d0(DAT_001edb64,uVar4,DAT_001edb60,param_2 + 0x208c,param_2,0x5f,0,0,0,0,1);
  }
  return;
}

