// OoT3D decomp @ 004a5150  name=FUN_004a5150  size=1220

undefined4 FUN_004a5150(int *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;

  if (*param_3 != param_4) {
    if (param_4 < *param_3) {
LAB_004a517c:
      FUN_002bf00c(param_1);
      return 0x43;
    }
    uVar12 = (**(code **)(*(int *)param_1[7] + 0x24))();
    plVar6 = (longlong *)uVar12;
    (**(code **)*param_1)
              (param_1,s_ReadEp__pos__d_value__x_offset____004a54d8,*param_3,
               *(undefined1 *)(param_2 + *param_3),uVar12);
    uVar1 = *param_3;
    if (*(char *)(param_2 + uVar1) == '\0') {
      *param_3 = uVar1 + 1;
      if ((char)param_1[0xb] == '\0') {
        iVar5 = param_1[8] - (uVar1 + 1);
      }
      else {
        iVar5 = 0;
      }
      (**(code **)*param_1)(param_1,s_EpPadding___d_004a54fc,iVar5);
      if ((char)param_1[0xb] == '\0') {
        *param_3 = param_1[8];
      }
    }
    else {
      local_2c = uVar1 + param_2;
      iVar5 = 1;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      while (lVar13 = FUN_002bd52c(&local_38,1), lVar13 == 0) {
        iVar5 = iVar5 + 1;
      }
      uVar1 = FUN_002bd52c(&local_38,iVar5);
      local_3c = param_1[0x11];
      iVar5 = local_3c;
      iVar9 = *(int *)(local_3c + 4);
      while (iVar9 != 0) {
        if (*(uint *)(iVar9 + 0x10) < uVar1) {
          iVar9 = *(int *)(iVar9 + 0xc);
        }
        else {
          iVar5 = iVar9;
          iVar9 = *(int *)(iVar9 + 8);
        }
      }
      if ((iVar5 != local_3c) && (*(uint *)(iVar5 + 0x10) <= uVar1)) {
        local_3c = iVar5;
      }
      if (local_3c == param_1[0x11]) {
        (**(code **)(*param_1 + 4))(param_1,s_ReadEp__cannot_find_stream__d_004a550c,uVar1);
        FUN_002bf00c(param_1);
        return 0x47;
      }
      iVar5 = FUN_002bd52c(&local_38,1);
      (**(code **)*param_1)(param_1,s_Ep__Stream_index___d_EndFrame____004a552c,uVar1,iVar5);
      iVar9 = *(int *)(local_3c + 0x18);
      if (*(char *)(iVar9 + 0x7c) == '\0') {
        (**(code **)(*param_1 + 4))(param_1,s_ReadEp__stream__d_already_disabl_004a5550,uVar1);
        FUN_002bf00c(param_1);
        return 0x48;
      }
      FUN_002bd8c4(iVar9);
      if (iVar5 != 0) {
        iVar7 = 1;
        while (lVar13 = FUN_002bd52c(&local_38,1), lVar13 == 0) {
          iVar7 = iVar7 + 1;
        }
        uVar2 = FUN_002bd52c(&local_38,iVar7);
        iVar7 = FUN_002bd52c(&local_38,1);
        iVar8 = 0x1c;
        while (lVar13 = FUN_002bd52c(&local_38,1), lVar13 == 0) {
          iVar8 = iVar8 + 2;
        }
        lVar13 = FUN_002bd52c(&local_38,iVar8);
        if (iVar7 != 0) {
          lVar13 = CONCAT44(-((int)((ulonglong)lVar13 >> 0x20) + (uint)((int)lVar13 != 0)),
                            -(int)lVar13);
        }
        (**(code **)*param_1)(param_1,s_Frame_type___d_004a5574,uVar2);
        (**(code **)*param_1)
                  (param_1,s_Ts___d_004a5584,(int)lVar13,(int)((ulonglong)lVar13 >> 0x20));
        *(undefined4 *)(*(int *)(iVar9 + 0x68) + 0x18) = uVar2;
        plVar6 = (longlong *)(*(int *)(iVar9 + 0x68) + 0x10);
        *plVar6 = lVar13 + *(longlong *)(param_1 + 2);
      }
      iVar7 = FUN_002bd52c(&local_38,0xd);
      iVar7 = iVar7 + 1;
      *param_3 = local_2c - param_2;
      (**(code **)*param_1)(param_1,s_Ep_size___d_004a558c,iVar7,*(code **)*param_1,plVar6);
      if (param_4 < *param_3 + iVar7) {
        (**(code **)(*param_1 + 4))(param_1,s_Ep_goes_beyond_end_of_packet_004a559c);
        goto LAB_004a517c;
      }
      iVar8 = *(int *)(iVar9 + 0x68);
      iVar10 = *(int *)(iVar8 + 8) - *(int *)(iVar8 + 4);
      FUN_002bd1dc(iVar8,iVar10 + iVar7,0);
      (**(code **)(*param_1 + 8))
                (param_1,*param_3 + param_2,*(int *)(*(int *)(iVar9 + 0x68) + 4) + iVar10,iVar7);
      *param_3 = *param_3 + iVar7;
      (**(code **)*param_1)(param_1,s_pos___d_004a56f8);
      if (iVar5 != 0) {
        bVar11 = *(int *)(iVar9 + 0x58) != 0;
        iVar7 = 0;
        iVar5 = extraout_r1;
        if (bVar11) {
          iVar7 = *(int *)(iVar9 + 0x48);
          iVar5 = *(int *)(iVar9 + 0x50);
        }
        if (!bVar11 || iVar7 == iVar5) {
          FUN_002beafc(iVar9 + 0x34);
        }
        puVar3 = *(undefined4 **)(iVar9 + 0x48);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(iVar9 + 100);
          puVar3[1] = *(undefined4 *)(iVar9 + 0x68);
          piVar4 = *(int **)(iVar9 + 0x6c);
          puVar3[2] = piVar4;
          *piVar4 = *piVar4 + 1;
        }
        *(int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0x48) + 0xc;
        *(int *)(iVar9 + 0x58) = *(int *)(iVar9 + 0x58) + 1;
        FUN_002bea70((undefined4 *)(iVar9 + 100));
        *(undefined4 *)(iVar9 + 0x68) = 0;
        puVar3 = *(undefined4 **)(iVar9 + 100);
        piVar4 = (int *)(**(code **)*puVar3)(puVar3,4);
        if (piVar4 != (int *)0x0) {
          *piVar4 = 0;
        }
        *(int **)(iVar9 + 0x6c) = piVar4;
        *piVar4 = *piVar4 + 1;
      }
      if (*param_3 < param_4) {
        return 0;
      }
    }
  }
  return DAT_004a5704;
}
