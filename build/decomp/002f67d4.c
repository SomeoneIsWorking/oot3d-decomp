// OoT3D decomp @ 002f67d4  name=FUN_002f67d4  size=328

void FUN_002f67d4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 uVar7;
  int aiStack_148 [4];
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118 [4];
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 local_e4 [48];

  iVar1 = DAT_002f6924;
  local_118[0] = *DAT_002f691c;
  local_118[1] = DAT_002f691c[1];
  local_118[2] = DAT_002f691c[2];
  local_118[3] = DAT_002f691c[3];
  iStack_108 = DAT_002f691c[4];
  iStack_104 = DAT_002f691c[5];
  iStack_100 = DAT_002f691c[6];
  iStack_fc = DAT_002f691c[7];
  iStack_f8 = DAT_002f691c[8];
  iStack_f4 = DAT_002f691c[9];
  iStack_f0 = DAT_002f691c[10];
  iStack_ec = DAT_002f691c[0xb];
  iStack_e8 = DAT_002f691c[0xc];
  aiStack_148[0] = *DAT_002f6920;
  aiStack_148[1] = DAT_002f6920[1];
  aiStack_148[2] = DAT_002f6920[2];
  aiStack_148[3] = DAT_002f6920[3];
  iStack_138 = DAT_002f6920[4];
  iStack_134 = DAT_002f6920[5];
  iStack_130 = DAT_002f6920[6];
  iStack_12c = DAT_002f6920[7];
  iStack_128 = DAT_002f6920[8];
  iStack_124 = DAT_002f6920[9];
  iStack_120 = DAT_002f6920[10];
  iStack_11c = DAT_002f6920[0xb];
  uVar6 = *(uint *)(DAT_002f6928 + 0xbc);
  iVar3 = *(int *)(DAT_002f6924 + 0x18) + *(int *)(DAT_002f6924 + 0x1c) * 4;
  iVar2 = 0;
  iVar5 = local_118[iVar3];
  do {
    if (((iVar2 < iVar5) && (iVar3 < 0xc)) &&
       ((*(uint *)(DAT_002f693c + *(int *)(DAT_002f692c + iVar3 * 4) * 4 + -0x150) & uVar6) != 0)) {
      local_e4[iVar2 * 2 + 0x20] = DAT_002f6930;
      local_e4[iVar2 * 2 + 0x21] = DAT_002f6930;
      uVar7 = VectorSignedToFloat(iVar2 * 0x18 + 0x52,(byte)(in_fpscr >> 0x15) & 3);
      local_e4[iVar2 * 2 + 0x10] = uVar7;
      iVar4 = aiStack_148[iVar3];
      local_e4[iVar2 * 2 + 0x11] =
           *(undefined4 *)(DAT_002f692c + -0x1e4 + *(int *)(iVar4 + iVar2 * 4) * 4);
      local_e4[iVar2 * 2] = *(undefined4 *)(DAT_002f6940 + *(int *)(iVar4 + iVar2 * 4) * 4);
      local_e4[iVar2 * 2 + 1] = DAT_002f6934;
    }
    else {
      local_e4[iVar2 * 2 + 0x20] = DAT_002f6938;
      local_e4[iVar2 * 2 + 0x21] = DAT_002f6938;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_002fc534(*(undefined4 *)(DAT_002f6924 + 8),local_e4 + 0x10,local_e4 + 0x20,8,0x27);
  FUN_002fc40c(*(undefined4 *)(iVar1 + 8),local_e4,local_e4 + 0x20,8,0x27);
  return;
}
