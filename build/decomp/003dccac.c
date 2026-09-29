// OoT3D decomp @ 003dccac  name=FUN_003dccac  size=196

void FUN_003dccac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fStack_24;
  float local_20;
  float fStack_1c;

  FUN_003731e0(param_1 + 0x1a4);
  fVar5 = DAT_003dcde4;
  if (*(short *)(param_1 + 0xa4e) != 0) {
    *(short *)(param_1 + 0xa4e) = *(short *)(param_1 + 0xa4e) + -1;
  }
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xa4e),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)FUN_003727f0(fVar4 * fVar5 * DAT_003dcde8 * DAT_003dcdec);
  local_20 = *(float *)(param_1 + 0xc) + fVar5 * DAT_003dcdf0;
  *(float *)(param_1 + 0x2c) = local_20;
  fVar5 = DAT_003dcdf4;
  if (*(short *)(param_1 + 0xa4e) != 0) {
    return;
  }
  uVar3 = 0;
  do {
    if ((int)uVar3 < 2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 1;
    }
    if ((uVar3 & 1) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 1;
    }
    fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fStack_24 = *(float *)(param_1 + 0x28) + fVar4 * fVar5;
    fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fStack_1c = *(float *)(param_1 + 0x30) + fVar4 * fVar5;
    FUN_0036e670(param_2,&fStack_24,0,0,1,2000);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  FUN_00375bcc(param_1,uRam003dcdf8);
  FUN_00375bcc(param_1,uRam003dcdfc);
  FUN_0036fca8(param_1,param_2,10,8);
  FUN_00370350(DAT_00362a3c,param_1 + 0x1a4,1);
  *(short *)(param_1 + 0xa4e) = (short)DAT_00362a40;
  *(undefined2 *)(param_1 + 0xa50) = 0x78;
  *(ushort *)(param_1 + 0xa52) = (ushort)*(byte *)(param_1 + 0xa4c) * -0x200;
  *(ushort *)(param_1 + 0x36) =
       *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0x4000;
  fVar4 = (float)FUN_002cfca0();
  fVar5 = DAT_00362a44;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar4 * DAT_00362a44;
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar4 * fVar5;
  *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
  *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) | 1;
  *(undefined4 *)(param_1 + 0xa48) = DAT_00362a48;
  return;
}
