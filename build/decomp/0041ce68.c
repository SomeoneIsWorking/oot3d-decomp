// OoT3D decomp @ 0041ce68  name=FUN_0041ce68  size=608

void FUN_0041ce68(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint in_fpscr;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4 [6];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [48];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  local_24 = DAT_0041d0cc;
  local_a8 = DAT_0041d0c8;
  cVar1 = *(char *)((int)param_1 + 0x15);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)((int)param_1 + 0x16) + -1;
    *(char *)((int)param_1 + 0x16) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)((int)param_1 + 0x15) = 2;
      *(undefined1 *)((int)param_1 + 0x16) = 0x1e;
    }
LAB_0041cf34:
    if ((char)param_1[5] == '\0') goto LAB_0041cf5c;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[3] = local_24;
        goto LAB_0041cf5c;
      }
      cVar1 = *(char *)((int)param_1 + 0x16) + -1;
      *(char *)((int)param_1 + 0x16) = cVar1;
      if (cVar1 == '\0') {
        *(undefined1 *)((int)param_1 + 0x17) = 0;
        *(undefined1 *)((int)param_1 + 0x15) = 0;
      }
      goto LAB_0041cf34;
    }
    cVar1 = *(char *)((int)param_1 + 0x16) + -1;
    *(char *)((int)param_1 + 0x16) = cVar1;
    if (cVar1 != '\0') goto LAB_0041cf34;
    *(undefined1 *)((int)param_1 + 0x15) = 3;
    *(undefined1 *)((int)param_1 + 0x16) = 0x1e;
    param_1[4] = (int)((local_a8 - (float)param_1[3]) / DAT_0041d0d0);
    *(undefined1 *)(param_1 + 5) = 0x1e;
  }
  *(char *)(param_1 + 5) = (char)param_1[5] + -1;
  param_1[3] = (int)((float)param_1[3] + (float)param_1[4]);
LAB_0041cf5c:
  local_18 = param_1[3];
  local_20 = local_24;
  local_b8 = (float)VectorSignedToFloat((int)*(short *)(*param_1 + 0x2e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_24;
  local_c8 = (float)VectorSignedToFloat((int)*(short *)(*param_1 + 0x2c),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_30 = DAT_0041d0d8 + local_b8 * DAT_0041d0d4;
  local_34 = DAT_0041d0d8 - local_b8 * DAT_0041d0d4;
  local_28 = DAT_0041d0dc + local_c8 * DAT_0041d0d4;
  local_2c = DAT_0041d0dc - local_c8 * DAT_0041d0d4;
  local_a4[0] = local_c8 / local_c8;
  local_44 = *DAT_0041d0e0;
  uStack_40 = DAT_0041d0e0[1];
  uStack_3c = DAT_0041d0e0[2];
  uStack_38 = DAT_0041d0e0[3];
  local_a4[5] = local_b8 / local_b8;
  local_c8 = local_a8 / local_c8;
  local_b8 = local_a8 / local_b8;
  local_a4[1] = 0.0;
  local_a4[2] = 0.0;
  local_88 = 0;
  local_a4[3] = 0.0;
  local_a4[4] = 0.0;
  local_8c = 0;
  local_7c = local_24;
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_d0 = 0;
  local_d4 = 0x3f800000;
  local_cc = 0;
  local_c4 = 0;
  uStack_c0 = 0x3f800000;
  local_b0 = 0;
  uStack_ac = 0x3f800000;
  local_bc = 0;
  local_b4 = 0;
  FUN_0036c174(auStack_74,&local_d4,local_a4);
  FUN_003065d0(param_2,6,&local_24,&local_34,*param_1,&local_44,auStack_74,0x7fffffff);
  return;
}
