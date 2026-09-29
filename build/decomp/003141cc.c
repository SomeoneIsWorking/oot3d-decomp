// OoT3D decomp @ 003141cc  name=FUN_003141cc  size=196

void FUN_003141cc(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  uVar5 = DAT_00314294;
  iVar3 = DAT_00314290;
  piVar4 = *(int **)(*param_1 + 8);
  cVar1 = *param_2;
  iVar7 = DAT_00314290 + -0xe20000;
  *piVar4 = DAT_00314290;
  piVar4[1] = iVar7;
  uVar6 = uVar5 | iVar3 >> 0x16;
  if (cVar1 == '\0') {
    piVar4[2] = DAT_00314298;
    piVar4[3] = uVar5;
    piVar4[4] = 0;
    piVar4[5] = uVar6;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    piVar4[2] = (uint)(byte)param_2[5] << 0x1c | (uint)(byte)param_2[4] << 0x18 |
                (uint)(byte)param_2[3] << 0x14 | (uint)(byte)param_2[2] << 0x10 |
                (uint)(byte)param_2[7] << 8 | (uint)(byte)param_2[6];
    piVar4[3] = uVar5;
    uVar5 = *(uint *)(param_2 + 8);
    bVar2 = param_2[0xb];
    piVar4[5] = uVar6;
    piVar4[4] = uVar5 & 0xffffff | (uint)bVar2 << 0x18;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(int **)(*param_1 + 8) = piVar4 + 6;
  return;
}
