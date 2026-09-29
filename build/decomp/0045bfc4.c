// OoT3D decomp @ 0045bfc4  name=FUN_0045bfc4  size=600

void FUN_0045bfc4(int param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;

  if (*(char *)(param_2 + 6) == '\0') {
    param_2 = param_1 + 0x500c;
  }
  iVar5 = FUN_003695f8();
  if (iVar5 == 0) {
    uVar7 = 0;
    if (*(short *)(param_2 + 0x14) != 0) {
      do {
        FUN_00373bec(*(int *)(param_2 + 0x18) + uVar7 * 0x98);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < *(ushort *)(param_2 + 0x14));
    }
    iVar5 = DAT_0045c22c;
    uVar4 = DAT_0045c228;
    piVar3 = DAT_0045c224;
    fVar2 = DAT_0045c220;
    uVar7 = DAT_0045c21c;
    uVar8 = 0;
    if (*(short *)(param_2 + 0x3c) != 0) {
      do {
        uVar6 = (uint)*(ushort *)(iVar5 + 0xa8);
        lVar1 = (longlong)(int)uVar7 *
                (longlong)
                (int)(((uint)((ulonglong)uVar6 * (ulonglong)uVar7 >> 0x27) * DAT_0045c230 + uVar6) *
                     0x3c);
        fVar9 = (float)VectorSignedToFloat(uVar6 * 0x5ffd + 0x5ffd >> 0x1a,
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat((int)(short)((short)(int)(lVar1 >> 0x27) -
                                                        (short)(lVar1 >> 0x3f)),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*piVar3 == 0) {
          *(float *)(*(int *)(param_2 + 0x40) + uVar8 * 0x98 + 8) = fVar9 + fVar10 * fVar2;
          FUN_003586ec();
        }
        *(undefined4 *)(*(int *)(param_2 + 0x40) + uVar8 * 0x98 + 0xc) = uVar4;
        FUN_00373bec(*(int *)(param_2 + 0x40) + uVar8 * 0x98);
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < *(ushort *)(param_2 + 0x3c));
    }
    iVar5 = DAT_0045c234;
    uVar7 = 0;
    if (*(int *)(DAT_0045c234 + 0x10) == 0) {
      if (*(short *)(param_2 + 0x1c) != 0) {
        do {
          FUN_00373bec(*(int *)(param_2 + 0x20) + uVar7 * 0x98);
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < *(ushort *)(param_2 + 0x1c));
      }
    }
    else if (*(short *)(param_2 + 0x24) != 0) {
      do {
        FUN_00373bec(*(int *)(param_2 + 0x28) + uVar7 * 0x98);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < *(ushort *)(param_2 + 0x24));
    }
    uVar7 = 0;
    if (*(int *)(iVar5 + 4) == 0) {
      if (*(short *)(param_2 + 0x34) != 0) {
        do {
          FUN_00373bec(*(int *)(param_2 + 0x38) + uVar7 * 0x98);
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < *(ushort *)(param_2 + 0x34));
      }
    }
    else if (*(short *)(param_2 + 0x2c) != 0) {
      do {
        FUN_00373bec(*(int *)(param_2 + 0x30) + uVar7 * 0x98);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < *(ushort *)(param_2 + 0x2c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0045c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0045c238 + (uint)*(byte *)(param_1 + 0x106) * 0xc + 8))(param_1,param_2);
  return;
}
