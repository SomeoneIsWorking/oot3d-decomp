// OoT3D decomp @ 00330544  name=FUN_00330544  size=356

void FUN_00330544(int param_1,int param_2,int param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;

  fVar8 = DAT_003306c0;
  fVar7 = DAT_003306bc;
  uVar6 = DAT_003306b8;
  fVar5 = DAT_003306b4;
  fVar4 = DAT_003306b0;
  fVar3 = DAT_003306ac;
  fVar2 = DAT_003306a8;
  iVar11 = 0;
  iVar10 = param_2;
  do {
    iVar9 = z_actor_003738d0(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                             *(undefined4 *)(param_2 + 0x30),param_1 + 0x208c,param_1,0x69,0,0,0,0,1
                            );
    if (iVar9 != 0) {
      sVar1 = (short)iVar11 + 1;
      *(int *)(iVar10 + 0x128) = iVar9;
      fVar12 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      *(int *)(iVar9 + 0x604) = param_2;
      *(int *)(iVar9 + 0x124) = iVar10;
      iVar10 = iVar11 * -0x28 + 0xff;
      *(short *)(iVar9 + 0x540) = sVar1;
      *(float *)(iVar9 + 0x54) = fVar2;
      *(char *)(iVar9 + 0x573) = (char)iVar10;
      fVar12 = fVar4 - fVar12 * fVar3;
      *(ushort *)(iVar9 + 0x542) = (ushort)iVar10 & 0xff;
      fVar13 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar9 + 0x58) = fVar12;
      *(float *)(iVar9 + 0x55c) = fVar12;
      fVar12 = fVar2 - fVar13 * fVar5;
      *(float *)(iVar9 + 0x5c) = fVar12;
      *(float *)(iVar9 + 0x560) = fVar12;
      if (param_3 != 0) {
        *(undefined1 *)(iVar9 + 0x573) = 0;
        *(undefined4 *)(iVar9 + 0x560) = uVar6;
        *(undefined4 *)(iVar9 + 0x55c) = uVar6;
      }
      iVar10 = iVar11 * 2 + 2;
      *(short *)(iVar9 + 0x544) = sVar1;
      fVar12 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar10 < 1) {
        fVar12 = fVar12 * fVar7 * fVar8 - fVar8;
      }
      else {
        fVar12 = fVar8 + fVar12 * fVar7 * fVar8;
      }
      *(int *)(iVar9 + 0x534) = (int)fVar12;
      *(undefined1 *)(iVar9 + 0x574) = 0xff;
      iVar10 = iVar9;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  return;
}
