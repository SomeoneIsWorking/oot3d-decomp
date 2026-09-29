// OoT3D decomp @ 00332ca8  name=FUN_00332ca8  size=780

void FUN_00332ca8(float param_1,int param_2,int param_3,float *param_4,float *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar5 = DAT_00332fb4;
  iVar3 = param_2 + param_3 * 0x24;
  cVar1 = *(char *)(param_2 + 0x240);
  fVar4 = *(float *)(iVar3 + 8);
  if (cVar1 == '\x01') {
    fVar5 = (float)FUN_003331e0(fVar4,*(undefined4 *)(iVar3 + 0x14),param_1);
    *param_4 = fVar5;
    fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x18),param_1);
    param_4[1] = fVar5;
    fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x1c),param_1)
    ;
    param_4[2] = fVar5;
    *param_5 = *(float *)(iVar3 + 0x14);
    param_5[1] = *(float *)(iVar3 + 0x18);
    fVar5 = *(float *)(iVar3 + 0x1c);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        param_1 = param_1 * DAT_00332fb4;
        fVar5 = (float)FUN_003331e0(fVar4,*(undefined4 *)(iVar3 + 0x14),param_1);
        *param_4 = fVar5;
        fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x18),
                                    param_1);
        param_4[1] = fVar5;
        fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x1c),
                                    param_1);
        param_4[2] = fVar5;
        fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 8),param_1
                                   );
        *param_5 = fVar5;
        fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0xc),
                                    param_1);
        param_5[1] = fVar5;
        fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x10),
                                    param_1);
        param_5[2] = fVar5;
        param_1 = param_1 * DAT_00332fbc;
      }
      else if (cVar1 == '\x04') {
        fVar10 = *(float *)(iVar3 + 0x1c);
        fVar6 = *(float *)(iVar3 + 0x10);
        fVar8 = (fVar4 - *(float *)(iVar3 + 0x14)) * DAT_00332fb4;
        fVar9 = (*(float *)(iVar3 + 0xc) - *(float *)(iVar3 + 0x18)) * DAT_00332fb4;
        fVar7 = (*(float *)(param_2 + 0x244) - DAT_00332fb8) * param_1;
        *param_4 = fVar4 + fVar8 * fVar7;
        param_4[1] = *(float *)(iVar3 + 0xc) + fVar9 * fVar7;
        fVar5 = (fVar6 - fVar10) * fVar5;
        param_4[2] = *(float *)(iVar3 + 0x10) + fVar5 * fVar7;
        *param_5 = *(float *)(iVar3 + 0x14) - fVar8 * fVar7;
        param_5[1] = *(float *)(iVar3 + 0x18) - fVar9 * fVar7;
        param_5[2] = *(float *)(iVar3 + 0x1c) - fVar5 * fVar7;
      }
      else {
        *param_4 = fVar4;
        param_4[1] = *(float *)(iVar3 + 0xc);
        param_4[2] = *(float *)(iVar3 + 0x10);
        *param_5 = *(float *)(iVar3 + 0x14);
        param_5[1] = *(float *)(iVar3 + 0x18);
        param_5[2] = *(float *)(iVar3 + 0x1c);
      }
      goto LAB_00332ed0;
    }
    *param_4 = fVar4;
    param_4[1] = *(float *)(iVar3 + 0xc);
    param_4[2] = *(float *)(iVar3 + 0x10);
    fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 8),param_1);
    *param_5 = fVar5;
    fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0xc),param_1);
    param_5[1] = fVar5;
    fVar5 = (float)FUN_003331e0(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x10),param_1)
    ;
  }
  param_5[2] = fVar5;
LAB_00332ed0:
  if ((*(ushort *)(param_2 + 0x248) & 0x10) != 0) {
    param_6[3] = 0xff;
    param_6[2] = 0xff;
    param_6[1] = 0xff;
    *param_6 = 0xff;
    param_7[3] = 0xff;
    param_7[2] = 0xff;
    param_7[1] = 0xff;
    *param_7 = 0xff;
    return;
  }
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x24e),*(undefined1 *)(param_2 + 0x256));
  *param_6 = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x24f),*(undefined1 *)(param_2 + 599));
  param_6[1] = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x250),*(undefined1 *)(param_2 + 600));
  param_6[2] = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x251),*(undefined1 *)(param_2 + 0x259));
  param_6[3] = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x252),*(undefined1 *)(param_2 + 0x25a));
  *param_7 = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x253),*(undefined1 *)(param_2 + 0x25b));
  param_7[1] = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x254),*(undefined1 *)(param_2 + 0x25c));
  param_7[2] = uVar2;
  uVar2 = FUN_003331b0(param_1,*(undefined1 *)(param_2 + 0x255),*(undefined1 *)(param_2 + 0x25d));
  param_7[3] = uVar2;
  return;
}
