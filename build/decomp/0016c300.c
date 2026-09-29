// OoT3D decomp @ 0016c300  name=FUN_0016c300  size=1104

void FUN_0016c300(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;

  if (*(char *)(param_1 + 0x1ab) == '\x01') {
    if (((*(int *)(param_1 + 0x124) != 0) && ((*(uint *)(param_1 + 4) & 0x40) == 0)) &&
       (*(float *)(param_1 + 0xfc) * DAT_0016c634 <= *(float *)(param_1 + 0xf4))) {
      uVar3 = 0;
      if (*(short *)(param_1 + 0x1a4) < 0) {
        uVar3 = 0x80;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x124) + *(byte *)(param_1 + 0x1a6) + 0x1a6) = uVar3;
      FUN_00374428(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1ab) == '\x02') {
    FUN_0034e6d0(param_1,param_2);
  }
  uVar2 = DAT_0016c77c;
  uVar1 = DAT_0016c778;
  fVar10 = DAT_0016c648;
  iVar8 = DAT_0016c638;
  if (*(short *)(param_1 + 0x1c) < 0xb) {
    if ((*(byte *)(param_1 + 0x1c1) & 2) != 0) {
      *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfd;
      FUN_00375bcc(param_1,iVar8 + -0xa5);
    }
    if (*(short *)(param_1 + 0x16) != 0) {
      local_40 = *(undefined4 *)(param_1 + 0x28);
      local_38 = *(undefined4 *)(param_1 + 0x30);
      local_3c = *(float *)(param_1 + 0x2c) + DAT_0016c63c;
      if ((uint)(int)*(short *)(param_1 + 0x1a4) < 100) {
        FUN_00374444(param_2,param_1,&local_40,(int)(short)((int)*(short *)(param_1 + 0x1a4) << 4));
      }
      else if (*(ushort *)(param_1 + 0x18) != 0) {
        uVar5 = *(ushort *)(param_1 + 0x18) | 0xe000;
        *(ushort *)(param_1 + 0x18) = uVar5;
        z_actor_003738d0(local_40,local_3c,local_38,param_2 + 0x208c,param_2,0x95,0,
                         (int)*(short *)(param_1 + 0x36),0,(int)(short)uVar5,1);
        *(undefined2 *)(param_1 + 0x18) = 0;
      }
      if (-2 < *(short *)(param_1 + 0x1a4)) {
        uVar9 = 0x17;
        if (*(short *)(param_1 + 0x1c) == 6 || *(short *)(param_1 + 0x1c) == 7) {
          uVar9 = 0x18;
        }
        FUN_00375bcc(param_1,iVar8);
        uVar1 = DAT_0016c640;
        iVar8 = 3;
        do {
          fVar10 = (float)FUN_003738a8(uVar1);
          z_actor_003738d0(local_40,local_3c,local_38,param_2 + 0x208c,param_2,0x77,0,
                           (int)(short)(int)fVar10,0,uVar9,1);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      *(undefined2 *)(param_1 + 0x1a4) = 0xffeb;
      *(undefined2 *)(param_1 + 0x16) = 0;
    }
    if (*(int *)(param_1 + 0x98) < DAT_0016c644) {
      FUN_0037632c(param_1,param_1 + 0x1b0);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
    }
  }
  else if (*(short *)(param_1 + 0x1c) < 0x17) {
    uVar6 = (uint)*(short *)(param_1 + 0x1a4);
    if ((int)uVar6 < -1) goto LAB_0016c6f4;
    iVar7 = *(int *)(DAT_0016c650 + *(int *)(DAT_0016c64c + param_2));
    if (iVar7 == 0) {
      if (DAT_0016c654 <= (int)SQRT(*(float *)(param_1 + 0x94))) {
        return;
      }
      fVar10 = *(float *)(*(int *)(DAT_0016c64c + param_2) + 0x221c);
    }
    else {
      if (DAT_0016c658 <= (int)SQRT(*(float *)(param_1 + 0x94))) {
        return;
      }
      fVar10 = *(float *)(iVar7 + 0x6c);
    }
    if (fVar10 == DAT_0016c648) {
      return;
    }
    if (uVar6 < 100) {
      FUN_00374444(param_2,param_1,param_1 + 0x28,(int)(short)((ushort)(uVar6 << 4) | 0x8000));
    }
    *(undefined2 *)(param_1 + 0x1a4) = 0xffeb;
    FUN_00375bcc(param_1,iVar8);
  }
  else {
    *(short *)(param_1 + 0x1a4) = *(short *)(param_1 + 0x1a4) + 1;
    FUN_00373500(fVar10,uVar2,uVar1,param_1 + 0x60);
    FUN_00373500(fVar10,uVar2,uVar1,param_1 + 0x68);
    FUN_0036b96c(param_1);
    fVar10 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1a4) * (short)DAT_0016c780));
    *(short *)(param_1 + 0xc0) = (short)(int)(fVar10 * DAT_0016c784);
    cVar4 = *(char *)(param_1 + 0x1a6) + -1;
    *(char *)(param_1 + 0x1a6) = cVar4;
    if (cVar4 == '\0') {
      FUN_00374428(param_1);
    }
  }
  if (-2 < *(short *)(param_1 + 0x1a4)) {
    return;
  }
LAB_0016c6f4:
  uVar5 = *(short *)(param_1 + 0x1a4) + 1;
  *(ushort *)(param_1 + 0x1a4) = uVar5;
  fVar10 = (float)FUN_002cfca0((int)(short)((uVar5 ^ 0xffff) * (short)DAT_0016c788));
  fVar10 = fVar10 * DAT_0016c78c;
  fVar11 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe))
                              );
  *(short *)(param_1 + 0xbc) = (short)(int)(fVar11 * fVar10);
  fVar11 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe))
                              );
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar11 * fVar10);
  return;
}
