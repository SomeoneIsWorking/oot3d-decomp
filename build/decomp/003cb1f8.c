// OoT3D decomp @ 003cb1f8  name=FUN_003cb1f8  size=404

void FUN_003cb1f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;

  uVar3 = DAT_003cb394;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003cb38c + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_003cb394,fVar8 * DAT_003cb390,param_1 + 0x221c);
  iVar2 = FUN_0036b4ec(param_1 + 0x254,param_2);
  fVar8 = DAT_003cb39c;
  uVar1 = DAT_003cb398;
  if (iVar2 != 0) {
LAB_003cb250:
    FUN_0036b2d4(uVar1,param_1,param_2);
    return;
  }
  iVar2 = FUN_0036b1e0(DAT_003cb39c,param_1 + 0x254);
  if (iVar2 != 0) {
    psVar6 = *(short **)(param_1 + 0x1224);
    if (psVar6 == (short *)0x0) {
      FUN_0036b0fc(param_2,param_1);
      FUN_0036b02c(param_2,param_1);
      goto LAB_003cb250;
    }
    *(undefined4 *)(psVar6 + 0x32) = uVar3;
    *(undefined4 *)(psVar6 + 0x36) = uVar3;
    FUN_0036aef0(param_2,param_1);
    if (*psVar6 == 0xda) {
      if ((*(uint *)(param_1 + 0x1710) & DAT_003cb3a0) == 0) {
        uVar3 = FUN_0036c5bc(param_2,0);
        iVar4 = FUN_00351878(uVar3,6);
        iVar2 = DAT_003cb3a8;
        uVar3 = DAT_003cb3a4;
        if (iVar4 != 0) {
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            uVar5 = *(uint *)(param_1 + 0x1710);
            bVar7 = (uVar5 & 0x8000000) == 0;
            if (!bVar7) {
              uVar5 = (uint)*(byte *)(param_1 + 0x1a7);
            }
            if (bVar7 || uVar5 == 1) {
              return;
            }
            if (*(float *)(*(int *)(param_1 + 0x170c) + 0x2c) <= *(float *)(param_1 + 0x88)) {
              return;
            }
          }
          *(undefined1 *)(param_1 + 0x1749) = 1;
          *(undefined4 *)(iVar2 + 0xcc) = uVar3;
          *(undefined1 *)(iVar2 + 0xd4) = 1;
        }
      }
    }
    else if (*psVar6 == 0x10) {
      *(undefined1 *)((int)psVar6 + 0x285) = 1;
      *(float *)(psVar6 + 0x32) = (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x10c)) - fVar8
      ;
      return;
    }
  }
  return;
}
