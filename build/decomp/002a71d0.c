// OoT3D decomp @ 002a71d0  name=FUN_002a71d0  size=636

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002a71d0(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  undefined2 *puVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;

  fVar3 = DAT_002a744c;
  uVar2 = *(ushort *)(param_1 + 0x90);
  if ((uVar2 & 2) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_002a744c;
  }
  if ((uVar2 & 1) != 0) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar3 <= *(float *)(param_1 + 0x6c)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_002a7450;
    }
    *(undefined4 *)(param_1 + 0xa50) = 0;
  }
  puVar4 = DAT_002a7458;
  if ((*(short *)(DAT_002a7454 + param_1) == 0) && ((uVar2 & 1) != 0)) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,10);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_002a7460,fVar3,uVar6,DAT_002a745c,param_1 + 0x1a4,10,2);
      if (((*(ushort *)(param_1 + 0x90) & 1) == 0) ||
         (*(float *)(param_1 + 100) != fVar3 && *(float *)(param_1 + 100) != -4.0)) {
        *(undefined4 *)(param_1 + 0xa50) = 1;
      }
      else {
        *(float *)(param_1 + 0x6c) = fVar3;
        *(undefined4 *)(param_1 + 0xa50) = 0;
      }
      *(undefined4 *)(param_1 + 0xa48) = 0xf;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      if (puVar4[1] != -1) {
        if (*(int *)(param_1 + 300) == 0) {
          *(undefined2 *)(*(int *)(param_1 + 0x130) + 0xa60) = 0x87;
          iVar7 = *(int *)(param_1 + 0x130);
          bVar1 = *(byte *)(iVar7 + 0xb7);
        }
        else {
          *(undefined2 *)(*(int *)(param_1 + 300) + 0xa60) = 0x87;
          iVar7 = *(int *)(param_1 + 300);
          bVar1 = *(byte *)(iVar7 + 0xb7);
        }
        if (bVar1 < 3) {
          *(undefined1 *)(iVar7 + 0xb7) = 3;
        }
      }
      uVar6 = DAT_002a7464;
      *puVar4 = 0;
      FUN_00375bcc(param_1,uVar6);
      *(undefined4 *)(param_1 + 0xa54) = DAT_002a7468;
    }
    else if ((*(short *)(param_1 + 0x1c) != -2) ||
            (iVar7 = FUN_0032fbc0(param_2,param_1), iVar7 == 0)) {
      if (puVar4[1] == -1) {
        sVar5 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe);
        if (sVar5 < 0) {
          sVar5 = -sVar5;
        }
        if ((((*(short *)(param_1 + 0x1c) == -2) && ((*(ushort *)(param_1 + 0x90) & 8) != 0)) &&
            ((int)sVar5 + 11999U <= DAT_002a746c)) && (*(int *)(param_1 + 0x98) < DAT_002a7470)) {
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe);
          FUN_00375c08(DAT_00328dc8,DAT_00328dc0,DAT_00328dc4,DAT_00328dc0,param_1 + 0x1a4,2);
          *(undefined4 *)(param_1 + 100) = DAT_00328dcc;
          *(undefined4 *)(param_1 + 0xa5c) = 0;
          uVar6 = DAT_00328dd0;
          *(undefined4 *)(param_1 + 0xa50) = 1;
          *(undefined4 *)(param_1 + 0x6c) = uVar6;
          *(undefined4 *)(param_1 + 0xa48) = 0x16;
          FUN_00375bcc(param_1,DAT_00328dd4);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
          *(undefined4 *)(param_1 + 0xa54) = DAT_00328dd8;
          return;
        }
        iVar7 = FUN_0032fdf8(param_2,param_1);
        if (iVar7 != 0) {
          return;
        }
        if (((*(short *)(param_1 + 0x1c) == -2) && (*(int *)(param_1 + 0x98) <= DAT_002a7474)) &&
           (((*(uint *)(DAT_002a7478 + param_2) & 3) != 0 &&
            (iVar7 = FUN_00328cac(param_2,param_1), iVar7 != 0)))) {
          uVar8 = FUN_0036ae14(param_1 + 0x1a4,3);
          uVar6 = DAT_00330240;
          uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00375c08(DAT_00330244,DAT_00330240,uVar8,DAT_0033023c,param_1 + 0x1a4,3,2);
          uVar8 = DAT_0033024c;
          if (*(short *)(param_1 + 0x1c) == -2) {
            *(undefined4 *)(param_1 + 0x1e4) = DAT_00330248;
          }
          *(byte *)(param_1 + 0xaec) = *(byte *)(param_1 + 0xaec) & 0xfb;
          *(undefined4 *)(param_1 + 0xa48) = 9;
          FUN_00375bcc(param_1,uVar8);
          uVar8 = DAT_00330250;
          *(undefined4 *)(param_1 + 0x6c) = uVar6;
          *(undefined4 *)(param_1 + 0xa54) = uVar8;
          return;
        }
      }
      FUN_00328c18(param_1,param_2);
      return;
    }
  }
  return;
}
