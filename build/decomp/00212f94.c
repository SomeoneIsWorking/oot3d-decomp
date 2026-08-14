// OoT3D decomp @ 00212f94  name=FUN_00212f94  size=456

void FUN_00212f94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x224) = 0;
  func_0x00372f38(param_1,param_2,param_1 + 0x21c,8,param_1 + 0x220,7,0);
  if (*(short *)(param_1 + 0x1c) == 100) {
    uVar1 = FUN_0036a924(param_1,param_2,1,0x53);
    *(undefined4 *)(param_1 + 0x224) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x218) = uRam0021315c;
  uVar1 = uRam00213160;
  if (199 < *(short *)(param_1 + 0x1c)) {
    uVar2 = func_0x003738a8(uRam00213160);
    *(undefined4 *)(param_1 + 0x1b4) = uVar2;
    uVar1 = func_0x003738a8(uVar1);
    *(undefined4 *)(param_1 + 0x1b0) = uVar1;
    uVar1 = func_0x003696ec(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
    uVar2 = func_0x00371e50(uRam00213164);
    *(undefined4 *)(param_1 + 100) = uVar2;
    fVar3 = (float)func_0x003727f0(uVar1);
    fVar4 = fRam00213168;
    *(float *)(param_1 + 0x60) = fVar3 * fRam00213168;
    fVar3 = (float)func_0x00372674(uVar1);
    *(float *)(param_1 + 0x68) = fVar3 * fVar4;
    *(undefined4 *)(param_1 + 0x70) = uRam0021316c;
    return;
  }
  func_0x00353dd0(param_2,param_1 + 0x1c0);
  func_0x00353d24(param_2,param_1 + 0x1c0,param_1,uRam00213170);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  func_0x0037572c(fVar4 * fRam00213174,param_1);
  uVar1 = uRam00213184;
  fVar4 = fRam0021317c;
  uVar2 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fRam00213178),
                              (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  fVar3 = fRam00213180;
  uVar2 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar4),
                              (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  uVar2 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar3),
                              (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  uVar2 = func_0x003738a8(uVar1);
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  uVar1 = func_0x003738a8(uVar1);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x58) * fRam00213188;
  return;
}

