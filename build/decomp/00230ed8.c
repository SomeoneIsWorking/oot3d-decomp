// OoT3D decomp @ 00230ed8  name=FUN_00230ed8  size=652

void FUN_00230ed8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;

  puVar5 = (ushort *)(param_1 + 0x200);
  *(undefined2 *)(param_1 + 0x1fe) = 0;
  *puVar5 = 0;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00372d4c(DAT_0023117c,DAT_00231164,param_1 + 0xbc,0);
    uVar4 = DAT_00231180;
    *(undefined2 *)(param_1 + 0xbc) = 0x4000;
    *(undefined4 *)(param_1 + 0x26c) = uVar4;
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_00372d4c(DAT_00231164,DAT_00231164,param_1 + 0xbc,0);
    piVar7 = DAT_00231170;
    *(undefined4 *)(param_1 + 0x26c) = DAT_00231168;
    fVar2 = DAT_00231174;
    fVar1 = DAT_0023116c;
    *puVar5 = *puVar5 | 2;
    uVar4 = DAT_00231178;
    iVar6 = 0;
    do {
      fVar9 = (float)VectorSignedToFloat(iVar6 * 2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + iVar6 + 0x202) = (char)(int)((fVar9 * fVar1) / fVar11 + fVar2);
      uVar10 = FUN_003738a8(uVar4);
      iVar8 = param_1 + iVar6 * 0xc;
      *(undefined4 *)(iVar8 + 0x20c) = uVar10;
      uVar10 = FUN_003738a8(uVar4);
      *(undefined4 *)(iVar8 + 0x210) = uVar10;
      uVar10 = FUN_003738a8(uVar4);
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar8 + 0x214) = uVar10;
    } while (iVar6 < 8);
  }
  FUN_0037572c(DAT_00231184,param_1);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_00231188);
  puVar3 = DAT_00231190;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_0023118c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_00231190 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00231190), iVar6 != 0)) {
    FUN_0036788c(DAT_00231194);
  }
  *(undefined4 *)(*(int *)(DAT_00231194 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00231190), iVar6 != 0)) {
    FUN_0036788c(DAT_00231194);
  }
  piVar7 = *(int **)(DAT_00231194 + 0x17c);
  uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,1);
  uVar4 = (**(code **)(*piVar7 + 8))(piVar7,uVar4,1);
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00231190), iVar6 != 0)) {
    FUN_0036788c(DAT_00231194);
  }
  *(undefined4 *)(*(int *)(DAT_00231194 + 0x17c) + 8) = 0;
  return;
}
