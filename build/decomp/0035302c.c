// OoT3D decomp @ 0035302c  name=FUN_0035302c  size=348

void FUN_0035302c(undefined4 param_1,float param_2,undefined4 param_3,float param_4,int param_5,
                 int param_6,undefined1 param_7,int param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  
  fVar2 = DAT_0035318c;
  fVar1 = DAT_00353188;
  uVar5 = in_fpscr & 0xfffffff | (uint)(param_4 == DAT_00353188) << 0x1e;
  *(undefined1 *)(param_5 + 0x70) = param_7;
  if (!SUB41(uVar5 >> 0x1e,0)) {
    bVar4 = false;
    if (*(int *)(param_5 + 0x30) == param_6) {
      uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_5 + 0x3c) == param_2) << 0x1e;
      bVar4 = SUB41(uVar5 >> 0x1e,0);
    }
    if (!bVar4) {
      uVar5 = uVar5 & 0xfffffff | (uint)(fVar1 <= param_4) << 0x1d;
      if (SUB41(uVar5 >> 0x1d,0)) {
        if (param_8 == 0) {
          *(undefined1 *)(param_5 + 0x71) = 7;
        }
        else {
          *(undefined1 *)(param_5 + 0x71) = 8;
          *(char *)(param_5 + 0x50) = (char)param_8;
        }
        FUN_003204a4(param_2,param_5,param_6,*(undefined1 *)(param_5 + 0x74),
                     *(undefined4 *)(param_5 + 0x7c));
      }
      else {
        FUN_00320d28(param_5);
        FUN_00358338(param_5,*(undefined4 *)(param_5 + 0x7c),*(undefined4 *)(param_5 + 0x78));
        param_4 = -param_4;
      }
      *(float *)(param_5 + 0x34) = fVar2;
      *(float *)(param_5 + 0x38) = fVar2 / param_4;
      goto LAB_0035312c;
    }
  }
  FUN_00320d28(param_5);
  FUN_003204a4(param_2,param_5,param_6,*(undefined1 *)(param_5 + 0x74),
               *(undefined4 *)(param_5 + 0x78));
  *(float *)(param_5 + 0x34) = fVar1;
LAB_0035312c:
  *(int *)(param_5 + 0x30) = param_6;
  *(float *)(param_5 + 0x44) = param_2;
  *(undefined4 *)(param_5 + 0x48) = param_3;
  uVar3 = FUN_003fe340(param_5,param_6);
  fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
  *(float *)(param_5 + 0x4c) = fVar6 + fVar2;
  if (*(byte *)(param_5 + 0x70) < 4) {
    *(float *)(param_5 + 0x3c) = param_2;
    if (*(byte *)(param_5 + 0x70) < 2) {
      *(float *)(param_5 + 0x48) = *(float *)(param_5 + 0x4c) - fVar2;
    }
  }
  else {
    *(float *)(param_5 + 0x3c) = fVar1;
  }
  *(undefined4 *)(param_5 + 0x40) = param_1;
  return;
}

