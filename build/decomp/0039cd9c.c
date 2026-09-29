// OoT3D decomp @ 0039cd9c  name=FUN_0039cd9c  size=224

void FUN_0039cd9c(int param_1,undefined4 param_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  (**(code **)(param_1 + 0x22c))();
  fVar1 = DAT_0039ce80;
  FUN_0036bee0(*(undefined4 *)(param_1 + 0x228),DAT_0039ce80,DAT_0039ce7c,DAT_0039ce7c,param_2);
  fVar2 = *(float *)(param_1 + 0x218);
  uVar5 = VectorFloatToUnsigned(fVar2 * DAT_0039ce84,3);
  uVar3 = VectorFloatToUnsigned(fVar2 * DAT_0039ce88,3);
  uVar7 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar4,uVar6,uVar7,param_1 + 0x200,uVar3 & 0xff,uVar3 & 0xff,uVar5 & 0xff,
               (int)(short)(int)(fVar2 * fVar1),0);
  return;
}
