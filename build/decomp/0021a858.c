// OoT3D decomp @ 0021a858  name=FUN_0021a858  size=212

undefined4 FUN_0021a858(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 local_10;
  undefined4 uStack_c;

  if (param_2 == 8) {
    FUN_0035fb94(&local_10,param_4 + 0xad6);
  }
  else {
    if (param_2 != 9) {
      return 0;
    }
    uVar4 = *(undefined4 *)(param_4 + 0xad0);
    uStack_c = *(undefined4 *)(param_4 + 0xad4);
    local_10 = uVar4;
    if ((*(ushort *)(param_4 + 0xac4) & 0x1000) != 0) {
      local_10._2_2_ = (short)((uint)uVar4 >> 0x10);
      local_10._0_2_ = (short)uVar4;
      iVar3 = (int)(short)(*(short *)(param_4 + 0xaf4) + (short)local_10);
      fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = *DAT_0021a92c;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar5) << 0x1f | (uint)(fVar6 == fVar5) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar6) || NAN(fVar5))) {
        fVar5 = -fVar5;
        fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar5) << 0x1f |
                (uint)(fVar6 == fVar5) << 0x1e;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar6) || NAN(fVar5))) {
          fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        }
      }
      local_10 = CONCAT22(local_10._2_2_ + *(short *)(param_4 + 0xaf6),(short)(int)fVar5);
    }
  }
  FUN_0034df48(param_3,&local_10);
  return 0;
}
