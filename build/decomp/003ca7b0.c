// OoT3D decomp @ 003ca7b0  name=FUN_003ca7b0  size=424

void FUN_003ca7b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  float fVar7;
  short local_28 [2];
  ushort local_24 [2];

  FUN_0037322c(*(undefined4 *)(param_1 + 0x654));
  FUN_00363a20(param_2,param_1,local_24,local_28);
  if (*(short *)(param_1 + 0x5de) != 0) {
    bVar4 = DAT_003ca958 <= *(uint *)(param_1 + 0xf4);
    bVar3 = *(uint *)(param_1 + 0xf4) == DAT_003ca958;
    if (!bVar4 || bVar3) {
      bVar4 = 0x13f < local_24[0];
      bVar3 = local_24[0] == 0x140;
    }
    if (((!bVar4 || bVar3) && (-1 < local_28[0])) && (local_28[0] < 0xf1)) {
      *(undefined2 *)(param_1 + 0x620) = 1;
      uVar1 = DAT_003ca95c;
      if (*(short *)(param_1 + 0x5dc) == 0) {
        *(ushort *)(param_1 + 0x618) = *(short *)(param_1 + 0x618) + 1U & 1;
        fVar5 = (float)FUN_003738a8(uVar1);
        uVar2 = DAT_003ca96c;
        fVar5 = (float)VectorSignedToFloat((short)(int)fVar5 + 5,(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ca964 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5dc) = (short)(int)((fVar5 * DAT_003ca960) / fVar7 + DAT_003ca968);
        iVar6 = FUN_00371e50(uVar2);
        if ((iVar6 < 0x3f800000) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
          *(undefined4 *)(param_1 + 100) = uVar1;
        }
      }
      fVar5 = DAT_003ca970;
      if (*(short *)(param_1 + 0x618) == 0) {
        fVar5 = DAT_003ca974;
      }
      FUN_00375a18(param_1 + 0x36,(int)(short)(int)(*(float *)(param_1 + 0x658) + fVar5),3,
                   (int)(short)(int)*(float *)(param_1 + 0x64c),0);
      FUN_00373500(DAT_003ca980,DAT_003ca97c,DAT_003ca978,param_1 + 0x64c);
      FUN_003344f4(param_1,param_2,2);
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
