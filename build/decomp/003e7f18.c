// OoT3D decomp @ 003e7f18  name=FUN_003e7f18  size=716

void FUN_003e7f18(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;

  iVar8 = DAT_003e81f0;
  fVar3 = DAT_003e81e4;
  cVar2 = *(char *)(param_1 + 0x1c2);
  if (cVar2 == '\0') {
    iVar8 = FUN_0036e864(param_2,*(undefined2 *)(param_1 + 0x1c4));
    if (iVar8 != 0) {
      *(undefined1 *)(param_1 + 0x1c2) = 2;
      *(undefined2 *)(param_1 + 0x1c0) = 0x3c;
      FUN_00371808(param_2,DAT_003e81e8,0xffffff9d,0,0);
    }
  }
  else if (cVar2 == '\x01') {
    sVar1 = *(short *)(param_1 + 0x1c0) + -1;
    *(short *)(param_1 + 0x1c0) = sVar1;
    if (sVar1 < 0) {
      *(undefined1 *)(param_1 + 0x1c2) = 2;
    }
  }
  else {
    if (cVar2 == '\x02') {
      if ((*(float *)(param_1 + 0x1c8) <= DAT_003e81e4) ||
         (fVar11 = *(float *)(param_1 + 0x1c8) - DAT_003e81ec, *(float *)(param_1 + 0x1c8) = fVar11,
         fVar3 < fVar11)) goto LAB_003e8080;
      FUN_0036b940(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
      *(float *)(param_1 + 0x1c8) = fVar3;
      *(undefined2 *)(param_1 + 0x1c0) = 600;
      uVar7 = 3;
    }
    else {
      if (cVar2 != '\x03') {
        if (((cVar2 == '\x04') && ((int)*(float *)(param_1 + 0x1c8) < DAT_003e81f0)) &&
           (fVar11 = *(float *)(param_1 + 0x1c8) + DAT_003e81ec,
           *(float *)(param_1 + 0x1c8) = fVar11, iVar8 <= (int)fVar11)) {
          FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
          *(undefined4 *)(param_1 + 0x1c8) = DAT_003e81f4;
          *(undefined1 *)(param_1 + 0x1c2) = 0;
          FUN_0036beac(param_2,*(undefined2 *)(param_1 + 0x1c4));
        }
        goto LAB_003e8080;
      }
      sVar1 = *(short *)(param_1 + 0x1c0) + -1;
      *(short *)(param_1 + 0x1c0) = sVar1;
      if (-1 < sVar1) goto LAB_003e8080;
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x1c2) = uVar7;
  }
LAB_003e8080:
  fVar6 = DAT_003e820c;
  uVar5 = DAT_003e8208;
  fVar4 = DAT_003e8204;
  fVar11 = DAT_003e8200;
  iVar8 = DAT_003e81f8;
  iVar10 = *(int *)(DAT_003e81f8 + 8);
  iVar9 = 0;
  local_50 = fVar3;
  local_4c = fVar3;
  local_48 = fVar3;
  local_5c = fVar3;
  local_58 = DAT_003e81fc;
  local_54 = fVar3;
  if (0 < iVar10) {
    do {
      local_3c = (float)FUN_003738a8(*(undefined4 *)(iVar8 + 4));
      if (*(int *)(param_1 + 0x1c8) < 0x43000000) {
        local_3c = local_3c * fVar11;
        if (local_3c < fVar3) {
          local_3c = local_3c - *(float *)(iVar8 + 4) * fVar4;
        }
        else {
          local_3c = local_3c + *(float *)(iVar8 + 4) * fVar4;
        }
      }
      local_44 = *(undefined4 *)(param_1 + 0x28);
      local_3c = *(float *)(param_1 + 0x30) + local_3c;
      local_40 = *(float *)(param_1 + 0x2c) + *(float *)(iVar8 + 0xc);
      fVar12 = (float)FUN_00371e50(uVar5);
      local_5c = -(*(float *)(iVar8 + 0x10) + fVar12 * *(float *)(iVar8 + 0x10));
      fVar12 = (float)FUN_003738a8(uVar5);
      local_58 = *(float *)(iVar8 + 0x10) + fVar12 * *(float *)(iVar8 + 0x10);
      fVar12 = (float)FUN_003738a8(fVar6);
      local_54 = fVar12 * *(float *)(iVar8 + 0x10) * fVar6;
      local_50 = local_5c * *(float *)(iVar8 + 0x14);
      local_48 = local_54 * *(float *)(iVar8 + 0x14);
      local_4c = fVar3;
      FUN_00343798(param_2,&local_44,&local_50,&local_5c,DAT_003e8210 + -4,DAT_003e8210,
                   (int)(short)*(undefined4 *)(iVar8 + 0x24),
                   (int)(short)*(undefined4 *)(iVar8 + 0x28),
                   (int)(short)*(undefined4 *)(iVar8 + 0x18));
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  return;
}
