// OoT3D decomp @ 004bb8f0  name=FUN_004bb8f0  size=320

void FUN_004bb8f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bba30 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004bba38,fVar4 * DAT_004bba34,param_1 + 0x221c);
  iVar3 = FUN_0036b4ec(param_1 + 0x254,param_2);
  uVar1 = DAT_004bba3c;
  if (iVar3 == 0) {
    iVar3 = FUN_0036b1e0(DAT_004bba44,param_1 + 0x254);
    if (iVar3 == 0) {
      FUN_00370378(param_1 + 0x1236,0,4000);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x12b0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x1224) = iVar3;
      *(int *)(param_1 + 0x128) = iVar3;
      *(int *)(iVar3 + 0x124) = param_1;
      iVar2 = DAT_004bba48;
      *(ushort *)(iVar3 + 0x90) = *(ushort *)(iVar3 + 0x90) & 0xff00;
      *(short *)(iVar2 + param_1) = *(short *)(iVar3 + 0xbe) - *(short *)(param_1 + 0xbe);
      return;
    }
  }
  else {
    FUN_0036b2d4(DAT_004bba3c,param_1,param_2);
    if (*(int *)(param_1 + 0x1224) != 0) {
      FUN_0035d27c(param_1,DAT_004bba40);
      FUN_00359aa0(param_1 + 0x1764,param_2,0xd5);
      return;
    }
  }
  FUN_0036b0fc(param_2,param_1);
  FUN_0036b02c(param_2,param_1);
  FUN_0036b2d4(uVar1,param_1,param_2);
  return;
}

