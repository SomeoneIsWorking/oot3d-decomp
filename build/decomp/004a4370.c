// OoT3D decomp @ 004a4370  name=FUN_004a4370  size=480

undefined4 FUN_004a4370(undefined4 *param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar4 = *param_3;
  if (param_4 <= uVar4) {
LAB_004a44b8:
    FUN_002bf00c(param_1);
    return 0x43;
  }
  (**(code **)*param_1)
            (param_1,s_ReadDataBlock__pos__d_value__x_004a4550,uVar4,
             *(undefined1 *)(param_2 + uVar4),param_4);
  uVar4 = *param_3;
  *param_3 = uVar4 + 1;
  bVar1 = *(byte *)(param_2 + uVar4);
  uVar7 = bVar1 & 1;
  *(char *)(param_1 + 0xb) = (char)uVar7;
  uVar4 = (uint)(bVar1 >> 2);
  uVar6 = (bVar1 & 2) >> 1;
  (**(code **)*param_1)(param_1,s_Data_block__Syncro__d_PacketCoun_004a4570,uVar4,uVar6,uVar7);
  if (param_1[9] == 0x40) {
    param_1[9] = uVar4;
  }
  else if (param_1[9] != uVar4) {
    (**(code **)*param_1)(param_1,s_synchroCounter___d_____SynchroCo_004a45b0,uVar4);
    if (param_1[5] == 0 && param_1[4] == 0) {
      FUN_002bf00c(param_1);
      return 0x46;
    }
    lVar3 = (ulonglong)(uint)param_1[4] * (ulonglong)(uVar4 - param_1[9]);
    uVar7 = (uint)lVar3;
    uVar5 = param_1[2];
    param_1[2] = uVar7 + uVar5;
    param_1[3] = (uVar4 - param_1[9]) * param_1[5] + (int)((ulonglong)lVar3 >> 0x20) + param_1[3] +
                 (uint)CARRY4(uVar7,uVar5);
    param_1[9] = uVar4;
    FUN_002bf074(param_1);
    (**(code **)*param_1)(param_1,s_Gts_recovery___d_004a45dc,param_1[2],param_1[3]);
  }
  if (uVar6 != 0) {
    uVar4 = *param_3 + 2;
    uVar2 = *(ushort *)(*param_3 + param_2);
    *param_3 = uVar4;
    uVar6 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
    if (param_4 < uVar4) goto LAB_004a44b8;
    uVar4 = uVar6;
    if (param_1[10] != 0x10000) {
      uVar4 = param_1[10] + 1 & 0xffff;
    }
    if (uVar4 != uVar6) {
      (**(code **)*param_1)(param_1,DAT_004a45f0,uVar4,uVar6);
      param_1[10] = 0x10000;
      FUN_004bb4c0(param_1);
      return 0x50;
    }
    param_1[10] = uVar6;
    (**(code **)*param_1)(param_1,s_packet___d_004a45f4);
  }
  (**(code **)*param_1)(param_1,s_pos___d_004a4600,*param_3);
  return 0;
}
