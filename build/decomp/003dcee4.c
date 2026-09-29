// OoT3D decomp @ 003dcee4  name=FUN_003dcee4  size=452

void FUN_003dcee4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar5 = *(int *)(DAT_003dd118 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  fVar8 = DAT_003dd128;
  uVar2 = DAT_003dd124;
  iVar1 = DAT_003dd11c;
  if (*(int *)(param_1 + 0x1e0) < DAT_003dd11c) {
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_003dd120);
    return;
  }
  iVar4 = FUN_003736fc(param_1 + 0x1a4);
  uVar3 = DAT_003dd134;
  if (iVar4 == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = DAT_003dd134;
      *(undefined2 *)(param_1 + 0x7dc) = 0x4b;
      FUN_00375bcc(param_1,DAT_003dd138);
      FUN_0036f44c(param_1);
      return;
    }
    if ((((DAT_003dd13c < *(uint *)(param_1 + 0x9c)) && ((*(byte *)(param_1 + 0x7f6) & 2) != 0)) &&
        (*(int *)(param_1 + 0x7f0) == iVar5)) && ((*(uint *)(DAT_003dd140 + iVar5) & 0x10) == 0)) {
      (**(code **)(DAT_003dd144 + param_2))(param_2,iVar5);
      fVar6 = DAT_003dd14c;
      FUN_00375c08(uVar2,DAT_003dd150,DAT_003dd14c,DAT_003dd148,param_1 + 0x1a4,2);
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined1 *)(param_1 + 0x7f8) = 0xc;
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) | 4;
      *(undefined2 *)(param_1 + 0x7de) = 0x28;
      if (*(int *)(DAT_003dd154 + 4) == 0) {
        fVar7 = -*(float *)(param_1 + 0x9c);
        fVar8 = fRam003dd168;
        fVar9 = fRam003dd170;
        if ((DAT_003dd164 <= (int)fVar7) && (fVar8 = fVar7, iRam003dd16c < (int)fVar7)) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar6 = -*(float *)(param_1 + 0x9c);
        fVar9 = DAT_003dd160;
        if ((iVar1 <= (int)fVar6) && (fVar8 = fVar6, DAT_003dd158 < (int)fVar6)) {
          fVar8 = DAT_003dd15c;
        }
      }
      *(float *)(param_1 + 0x2c) = *(float *)(iVar5 + 0x2c) + fVar8;
      fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar9 = fVar9 * fRam003dd174;
      *(float *)(param_1 + 0x28) = *(float *)(iVar5 + 0x28) + fVar9 * fVar8;
      fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      uVar2 = uRam003dd178;
      *(float *)(param_1 + 0x30) = *(float *)(iVar5 + 0x30) + fVar9 * fVar8;
      *(short *)(param_1 + 0xbc) = (short)uVar2;
      *(undefined4 *)(param_1 + 0x7d8) = uRam003dd17c;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003dd12c;
    *(undefined4 *)(param_1 + 100) = DAT_003dd130;
  }
  return;
}
