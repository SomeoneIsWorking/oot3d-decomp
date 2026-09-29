// OoT3D decomp @ 003562c0  name=FUN_003562c0  size=480

void FUN_003562c0(int param_1,ushort *param_2,int param_3,int param_4,short param_5)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  int iVar8;

  uVar3 = DAT_003564a0;
  if (*param_2 != DAT_003564a0) {
    iVar8 = param_3 + param_5 * 0x14;
    if ((int)*(short *)(iVar8 + 0xc) == (int)DAT_003564a0 >> 1 ||
        (int)*(short *)(iVar8 + 0xc) + ((int)DAT_003564a0 >> 1) == 0) {
      sVar7 = *(short *)(param_4 + (*(ushort *)(iVar8 + 2) & 0xffff1fff) * 6 + 2);
    }
    else {
      sVar7 = *(short *)(param_4 + (*(ushort *)(iVar8 + 2) & 0xffff1fff) * 6 + 2);
      sVar2 = *(short *)(param_4 + (*(ushort *)(iVar8 + 4) & 0xffff1fff) * 6 + 2);
      if (sVar2 < sVar7) {
        sVar7 = sVar2;
      }
      sVar2 = *(short *)(param_4 + (uint)*(ushort *)(iVar8 + 6) * 6 + 2);
      if (sVar2 <= sVar7) {
        sVar7 = sVar2;
      }
    }
    psVar5 = (short *)(*(int *)(param_1 + 0x48) + (uint)*param_2 * 4);
    iVar8 = param_3 + *psVar5 * 0x14;
    if (((*(short *)(param_4 + (*(ushort *)(iVar8 + 2) & 0xffff1fff) * 6 + 2) <= sVar7) ||
        (*(short *)(param_4 + (*(ushort *)(iVar8 + 4) & 0xffff1fff) * 6 + 2) <= sVar7)) ||
       (*(short *)(param_4 + (uint)*(ushort *)(iVar8 + 6) * 6 + 2) <= sVar7)) {
      do {
        psVar6 = psVar5;
        if ((ushort)psVar6[1] == DAT_003564a0) {
          uVar4 = *(ushort *)(param_1 + 0x46);
          *(ushort *)(param_1 + 0x46) = uVar4 + 1;
          psVar5 = (short *)(*(int *)(param_1 + 0x48) + (uint)uVar4 * 4);
          *psVar5 = param_5;
          psVar5[1] = (short)uVar3;
          goto LAB_0035648c;
        }
        psVar5 = (short *)(*(int *)(param_1 + 0x48) + (uint)(ushort)psVar6[1] * 4);
        iVar8 = param_3 + *psVar5 * 0x14;
      } while (((*(short *)(param_4 + (*(ushort *)(iVar8 + 2) & 0xffff1fff) * 6 + 2) <= sVar7) ||
               (*(short *)(param_4 + (*(ushort *)(iVar8 + 4) & 0xffff1fff) * 6 + 2) <= sVar7)) ||
              (*(short *)(param_4 + (uint)*(ushort *)(iVar8 + 6) * 6 + 2) <= sVar7));
      uVar4 = *(ushort *)(param_1 + 0x46);
      *(ushort *)(param_1 + 0x46) = uVar4 + 1;
      sVar2 = psVar6[1];
      psVar5 = (short *)(*(int *)(param_1 + 0x48) + (uint)uVar4 * 4);
      *psVar5 = param_5;
      psVar5[1] = sVar2;
LAB_0035648c:
      psVar6[1] = uVar4;
      return;
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x46);
  *(ushort *)(param_1 + 0x46) = uVar4 + 1;
  uVar1 = *param_2;
  psVar5 = (short *)(*(int *)(param_1 + 0x48) + (uint)uVar4 * 4);
  *psVar5 = param_5;
  psVar5[1] = uVar1;
  *param_2 = uVar4;
  return;
}
