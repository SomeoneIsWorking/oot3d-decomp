// OoT3D decomp @ 004a279c  name=FUN_004a279c  size=368

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004a279c(int param_1,undefined4 param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  short asStack_20 [2];
  undefined4 uStack_1c;

  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  iVar4 = FUN_002c3d18(param_2,param_1,DAT_004a290c,1);
  if (iVar4 == 0) {
    iVar4 = FUN_00349574(param_1);
    fVar2 = DAT_004a2918;
    if ((iVar4 == 0) && ((*(uint *)(DAT_004a2910 + param_1) & DAT_004a2914) == 0)) {
      iVar3 = FUN_003518cc();
      if ((iVar3 != 0) ||
         (uVar5 = DAT_002c3d04, (DAT_002c3d00 & *(uint *)(DAT_002c3cfc + param_1)) != 0)) {
        uVar5 = DAT_002c3d08;
      }
      FUN_0036055c(param_2,param_1,uVar5,1);
      uVar5 = DAT_002c3d10;
      if (*(int *)(param_1 + 0x284) !=
          *(int *)(DAT_002c3d0c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x30)) {
        *(undefined4 *)(param_1 + 0x2254) = DAT_002c3d10;
        *(undefined4 *)(param_1 + 0x2250) = uVar5;
      }
      *(undefined2 *)(DAT_002c3d14 + param_1) = 0;
      return;
    }
    FUN_0036b3f4(DAT_004a2918,param_1,&uStack_1c,asStack_20,param_2);
    uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x288) == fVar2) << 0x1e;
    if (SUB41(uVar6 >> 0x1e,0)) {
      fVar7 = (float)FUN_0036b4d0(DAT_004a291c,param_1 + 0x254);
      uVar6 = uVar6 & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f | (uint)(fVar7 == fVar2) << 0x1e;
      bVar1 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar7) || NAN(fVar2))) {
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004a2920 + 0x6a),
                                           (byte)(uVar6 >> 0x15) & 3);
        FUN_003705a0(fVar2,fVar7 * DAT_004a2924,param_1 + 0x221c);
        fVar7 = (float)FUN_0036b4d0(DAT_004a2928,param_1 + 0x254);
        if ((fVar7 <= fVar2) ||
           (iVar4 = FUN_002c3b94(uStack_1c,param_1,(int)asStack_20[0]), -1 < iVar4)) {
          if (iVar3 != 0) {
            FUN_0036055c(param_2,param_1,DAT_004a292c,1);
            FUN_00358dfc(DAT_004a2930,param_1 + 0x254,param_2,0x1e8);
            return;
          }
        }
        else {
          FUN_004bd904(param_1,(int)asStack_20[0],param_2);
        }
      }
    }
  }
  return;
}
