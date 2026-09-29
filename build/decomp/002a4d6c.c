// OoT3D decomp @ 002a4d6c  name=FUN_002a4d6c  size=464

void FUN_002a4d6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;

  uVar3 = DAT_002a4f44;
  uVar1 = DAT_002a4f3c;
  FUN_0036e168(DAT_002a4f48,DAT_002a4f44,DAT_002a4f40,DAT_002a4f3c,param_1 + 0xc4);
  FUN_0036e168(uVar1,uVar3,uVar3,uVar1,param_1 + 0x6c);
  FUN_00375a18(param_1 + 0xbc,0,1,0x32,0);
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0x84) < *(float *)(param_1 + 0x2c)) {
      FUN_0036e168(*(float *)(param_1 + 0x84),DAT_002a4f60,DAT_002a4f5c,DAT_002a4f58,param_1 + 0x2c)
      ;
      if ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) < DAT_002a4f64) {
        local_24 = *(undefined4 *)(param_1 + 0x28);
        uStack_1c = *(undefined4 *)(param_1 + 0x30);
        local_20 = *(undefined4 *)(param_1 + 0x84);
        FUN_0037378c(DAT_002a4f68,param_2,&local_24,1,0x96,100,1);
        FUN_0034f3a0(DAT_002a4f74,DAT_002a4f70,DAT_002a4f6c,param_2,param_1,&local_24,2);
      }
    }
  }
  else {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,DAT_002a4f4c,uVar3,uVar1,param_1 + 0x1a4,0,2);
    *(undefined2 *)(param_1 + 0x684) = 900;
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined2 *)(param_1 + 0x686) = 0;
    *(undefined4 *)(param_1 + 0x63c) = 3;
    uVar1 = DAT_002a4f54;
    *(byte *)(param_1 + 0x69d) = *(byte *)(param_1 + 0x69d) & 0xfd;
    *(undefined4 *)(param_1 + 0x644) = DAT_002a4f50;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    FUN_00375bcc(param_1,uVar1);
  }
  FUN_00375a18(param_1 + 0x67c,0,1,100,0);
  *(short *)(param_1 + 0x67e) = *(short *)(param_1 + 0x67e) + *(short *)(param_1 + 0x67c);
  return;
}
