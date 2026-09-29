// OoT3D decomp @ 0045257c  name=FUN_0045257c  size=616

void FUN_0045257c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_70;
  int local_6c;
  int local_68;
  undefined2 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;

  piVar2 = (int *)param_2[1];
  local_58 = piVar2[4];
  local_54 = piVar2[5];
  local_50 = piVar2[6];
  local_4c = piVar2[7];
  local_6c = (uint)*(ushort *)(piVar2[1] + *(short *)*param_2 * 2) + *piVar2;
  local_60 = piVar2[2];
  local_5c = piVar2[3];
  local_48 = piVar2[8];
  local_68 = local_6c + 0x108;
  local_64 = *(undefined2 *)(local_6c + 10);
  local_44 = 0;
  local_40 = local_60;
  local_3c = local_5c;
  local_38 = local_58;
  local_34 = local_54;
  local_30 = local_50;
  local_2c = local_4c;
  local_28 = local_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,*(int *)(param_2[2] + 0xc) + (short)(ushort)*(byte *)(*param_2 + 2) * 0x1cc);
  (**(code **)(*param_1 + 8))(param_1,param_2);
  (**(code **)(*param_1 + 0xc))(param_1,&local_6c);
  uVar1 = DAT_004527e4;
  local_70 = 0;
  if (*(short *)(local_6c + 8) != 0) {
    do {
      uVar5 = (uint)*(ushort *)(local_68 + local_70 * 2);
      iVar10 = uVar5 + local_6c;
      iVar8 = uVar5 + local_6c;
      uVar3 = FUN_00313644();
      FUN_00464730(param_1,&local_6c,local_70,uVar3);
      uVar3 = FUN_00314870(param_1 + 6);
      iVar6 = param_1[0x1d];
      param_1[0x1d] = iVar6 + 1;
      *(undefined4 *)(param_1[0x1c] + iVar6 * 4) = uVar3;
      FUN_003135e8(param_1 + 9,param_1 + 0x24,*(short *)(iVar8 + 0xe) * 3);
      uVar5 = param_1[0x11e];
      param_1[0x11e] = uVar5 & 0xfffffff3;
      if (*(short *)(iVar10 + 0xc) == 1 || *(short *)(iVar10 + 0xc) == 2) {
        uVar7 = 4;
      }
      else {
        uVar7 = 0;
      }
      uVar7 = uVar5 & 0xfffffff3 | uVar7;
      param_1[0x11e] = uVar7;
      if (*(short *)(iVar10 + 0xc) == 2) {
        uVar5 = 8;
      }
      else {
        uVar5 = 0;
      }
      param_1[0x11e] = uVar5 | uVar7;
      FUN_003135ac(param_1 + 9);
      iVar6 = 0;
      if (0 < *(int *)(iVar10 + 8)) {
        do {
          iVar8 = 0;
          iVar9 = (uint)*(ushort *)(iVar10 + 0x14 + iVar6 * 2) + iVar10;
          if (0 < *(int *)(iVar9 + 8)) {
            do {
              iVar4 = iVar9 + 0x10 + iVar8 * 8;
              FUN_00313444(param_1 + 9,4,(int)*(short *)(iVar4 + 4),uVar1,
                           (uint)*(ushort *)(iVar4 + 6) << 1);
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(iVar9 + 8));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar10 + 8));
      }
      local_70 = local_70 + 1;
    } while (local_70 < (int)(uint)*(ushort *)(local_6c + 8));
  }
  return;
}
