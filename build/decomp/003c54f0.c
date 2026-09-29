// OoT3D decomp @ 003c54f0  name=FUN_003c54f0  size=840

void FUN_003c54f0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  iVar6 = DAT_003c5838;
  if (((*(ushort *)(DAT_003c5838 + 0xee) & 0x800) == 0) &&
     ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1710) & 0x800000) != 0)) {
    *(ushort *)(DAT_003c5838 + 0x124) = *(ushort *)(DAT_003c5838 + 0x124) | 0x800;
  }
  iVar2 = DAT_003c583c;
  if (*(short *)(DAT_003c583c + 0x5e) == 10) {
    local_4c = DAT_003c5840;
    FUN_0037547c(DAT_003c5848,0,4,DAT_003c5844,DAT_003c5844);
    iVar9 = *(int *)(param_2 + 0x20ac);
    local_4c = 0;
    local_48 = 0;
    uVar4 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x468) = uVar4;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x468),7);
    local_44 = *(float *)(param_1 + 0x28);
    local_34 = *(float *)(param_1 + 0x2c) + DAT_003c584c;
    local_30 = *(float *)(param_1 + 0x30);
    local_40 = local_34 - DAT_003c5850;
    local_3c = local_30 + DAT_003c5854;
    local_38 = local_44;
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x468),&local_38,&local_44);
    uVar4 = FUN_003758b0(local_3c - *(float *)(param_1 + 0x30),local_44 - *(float *)(param_1 + 0x28)
                        );
    *(undefined2 *)(param_1 + 0xbe) = uVar4;
    *(undefined2 *)(param_1 + 0xd90) = (undefined2)local_4c;
    *(undefined2 *)(param_1 + 0xd92) = local_4c._2_2_;
    *(undefined2 *)(param_1 + 0xd94) = (undefined2)local_48;
    FUN_0035fb94(param_1 + 0xd96,&local_4c);
    FUN_00367c7c(param_2,DAT_003c5858,0);
    *(undefined2 *)(param_1 + 0xd88) = 1;
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar9 + 0x2c) = uVar7;
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
    fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar3 = DAT_003c585c;
    *(float *)(iVar9 + 0x28) = *(float *)(iVar9 + 0x28) + fVar10 * DAT_003c585c;
    fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(iVar9 + 0x30) = *(float *)(iVar9 + 0x30) + fVar10 * fVar3;
    iVar6 = *(int *)(iVar9 + 0x12b8);
    if (iVar6 != 0) {
      uVar7 = *(undefined4 *)(iVar9 + 0x2c);
      uVar8 = *(undefined4 *)(iVar9 + 0x30);
      *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar9 + 0x28);
      *(undefined4 *)(iVar6 + 0x2c) = uVar7;
      *(undefined4 *)(iVar6 + 0x30) = uVar8;
      *(undefined2 *)(*(int *)(iVar9 + 0x12b8) + 0x118) = 10;
    }
    *(undefined2 *)(iVar9 + 0x118) = 10;
    *(uint *)(iVar9 + 0x1710) = *(uint *)(iVar9 + 0x1710) | 0x20000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00338cd8(*DAT_003c5860);
    FUN_0034be04(2);
    *(undefined4 *)(param_1 + 0x3fc) = DAT_003c5864;
    *(undefined2 *)(iVar2 + 0x5e) = 0;
  }
  else if (*(short *)(param_1 + 0xd88) == 2) {
    iVar9 = FUN_00369f3c(param_2);
    if (iVar9 == 0) {
      if (*(short *)(DAT_003c5868 + 0x48) < 0x32) {
        FUN_00371680(param_2,4,0);
        *(undefined2 *)(param_1 + 0xd88) = 0;
        return;
      }
      uVar1 = *(ushort *)(iVar2 + 0x8a);
      uVar7 = 2;
      uVar8 = 2;
      uVar5 = (ushort)*(byte *)(*(int *)(*(int *)(param_2 + 0x20ac) + 0x12b8) + 0x1b0) << 4;
      *(ushort *)(iVar2 + 0x8a) = uVar1 & 0xffef | uVar5;
      uVar5 = uVar1 & 0xffe0 | uVar5 | 2;
    }
    else {
      local_4c = DAT_003c5840;
      FUN_0037547c(DAT_003c5848,0,4,DAT_003c5844,DAT_003c5844);
      if (((*(ushort *)(iVar6 + 0xee) & 0x800) == 0) && ((*(ushort *)(iVar6 + 0x124) & 0x800) != 0))
      {
        *(ushort *)(iVar6 + 0xee) = *(ushort *)(iVar6 + 0xee) | 0x800;
        *(ushort *)(iVar6 + 0x124) = *(ushort *)(iVar6 + 0x124) | 0x800;
      }
      uVar7 = 0;
      uVar8 = 0x20;
      uVar5 = *(ushort *)(iVar2 + 0x8a) & 0xfff0;
    }
    *(ushort *)(iVar2 + 0x8a) = uVar5;
    FUN_003715d0(param_1,param_2,uVar7,uVar8);
    *(ushort *)(iVar2 + 0x8a) = *(ushort *)(iVar2 + 0x8a) | 0x8000;
    FUN_00371680(param_2,0);
    *(undefined2 *)(param_1 + 0xd88) = 0;
    return;
  }
  return;
}
