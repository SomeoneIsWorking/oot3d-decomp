// OoT3D decomp @ 00387564  name=FUN_00387564  size=392

void FUN_00387564(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;

  (**(code **)(param_1 + 0x8f4))();
  if (*(int *)(param_1 + 0x8f4) != DAT_00387748) {
LAB_0038766c:
    if (*(short *)(param_1 + 0x8fe) == 0) {
      return;
    }
    sVar1 = *(short *)(param_1 + 0x8fe) + -1;
    *(short *)(param_1 + 0x8fe) = sVar1;
    if ((*(byte *)(param_1 + 0x9a0) & 2) == 0) {
      if (0x1d < sVar1) {
        iVar4 = FUN_003705a0(DAT_00387774,DAT_00387770,param_1 + 0x90c);
        if (iVar4 != 0) {
          fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x8fc));
          fVar3 = DAT_00387778;
          *(float *)(param_1 + 0x910) = *(float *)(param_1 + 0x910) + fVar6 * DAT_00387778;
          fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x8fc));
          *(float *)(param_1 + 0x918) = *(float *)(param_1 + 0x918) + fVar6 * fVar3;
        }
        *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_1 + 0x910);
        *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_1 + 0x914);
        *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_1 + 0x918);
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x990);
        return;
      }
    }
    else {
      *(byte *)(param_1 + 0x9a0) = *(byte *)(param_1 + 0x9a0) & 0xfd;
      *(undefined2 *)(param_1 + 0x8fe) = 0x1d;
    }
    FUN_003705a0(DAT_0038776c,DAT_00387768,param_1 + 0x90c);
    return;
  }
  if (*(int *)(param_1 + 0x8f4) == DAT_0038774c) {
    if (*(int *)(param_1 + 0x1e0) < DAT_00387750) {
      cVar2 = (char)(int)(*(float *)(param_1 + 0x1e0) * DAT_00387754) + '7';
      *(char *)(param_1 + 0x906) = cVar2;
      *(char *)(param_1 + 0x905) = cVar2;
      *(char *)(param_1 + 0x904) = cVar2;
      uVar5 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1e0) * DAT_00387758,3);
      *(char *)(param_1 + 0x907) = (char)uVar5;
      goto LAB_0038766c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
